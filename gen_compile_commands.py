#!/usr/bin/env python3
"""
Generate compile_commands.json from cc.yaml and the source tree.

Usage:
    python gen_compile_commands.py <working_dir> <output_dir>

The output is written to <output_dir>/compile_commands.json.

Mostly written by Claude Opus 4.6
"""

import json
import sys
from fnmatch import fnmatch
from pathlib import Path
import yaml

def is_ignored(rel_path: str, ignore_patterns: list[str]) -> bool:
    """Check if a relative path matches any of the ignore glob patterns."""
    return any(fnmatch(rel_path, pat) for pat in ignore_patterns)


def collect_version_entries(version_dir: Path):

    cc_yaml_path = version_dir / 'cc.yaml'
    src_dir = version_dir / 'src'
    build_dir = version_dir / 'build'
    include_dir = version_dir / 'include'

    if not cc_yaml_path.exists():
        print(f"Error: {cc_yaml_path} not found! (in {version_dir})", file=sys.stderr)
        sys.exit(1)
    if not src_dir.exists():
        print(f"Error: {src_dir} not found!", file=sys.stderr)
        sys.exit(1)

    cc_info = yaml.safe_load(cc_yaml_path.read_text())

    entries = []

    for module_dir in sorted(src_dir.iterdir()):
        if not module_dir.is_dir():
            continue
        module_name = module_dir.name
        module_info = cc_info.get(module_name, {})
        ignore_patterns = module_info.get('ignored', []) if isinstance(module_info, dict) else []

        sources = sorted(
            p for p in module_dir.rglob('*')
            if p.suffix in {'.c', '.cpp'}
        )

        for src_path in sources:
            # Check ignore list against path relative to the module dir
            rel_to_module = str(src_path.relative_to(module_dir))
            if is_ignored(rel_to_module, ignore_patterns):
                continue

            cc = 'gcc'
            flags = []
            o_path = build_dir / module_name / (src_path.stem + '.o')

            command = ' '.join(
                [cc] + [str(f) for f in flags] +
                ['-I' + str(include_dir)] +
                [str(src_path), '-c', '-o', str(o_path)]
            )

            entries.append({
                'directory': str(version_dir),
                'command': command,
                'file': str(src_path),
            })

    return entries


def main():
    if len(sys.argv) > 2:
        working_dir = Path(sys.argv[1]).resolve()
        out_path = Path(sys.argv[2]).resolve() / 'compile_commands.json'
    else:
        working_dir = Path.cwd()
        out_path = Path.cwd() / 'compile_commands.json'

    entries = []
    for dir in (working_dir / 'versions').iterdir():
        if dir.is_dir():
            entries += collect_version_entries(dir)

    out_path.write_text(json.dumps(entries, indent=2) + '\n')
    print(f"Wrote {len(entries)} entries to {out_path}")


if __name__ == '__main__':
    main()
