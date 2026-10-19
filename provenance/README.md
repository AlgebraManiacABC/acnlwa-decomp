# Symbol provenance

Every symbol CSV in [`versions/CTR-P-EAAE/symbols/`](../versions/CTR-P-EAAE/symbols/) ends with two columns that record where a
name came from and whether it is meant to last:

| Column        | Values         | Meaning                                                         |
|---------------|----------------|-----------------------------------------------------------------|
| `Provenance`  | a tag below    | The evidence the name rests on. Blank means not yet determined. |
| `Placeholder` | `true`/`false` | `true` if the name is a stand-in that should be replaced.       |

## Tags

### `Ghidra`
Ghidra's own auto-generated labels: `FUN_`, `DAT_`, `LAB_`, `PTR_`,
`thunk_FUN_`, `switchD_`, `switchdataD_`, `caseD_`, `default_` and the like. These are addresses spelled
out, not names. Always `Placeholder=true`.

### `Mapping`
ARM ELF mapping symbols, named exactly `$a` (ARM code), `$t` (Thumb code) or
`$d` (data). They mark where code and data alternate in `.text`, not a
symbol of their own:

- a `$d` row starts a literal pool, either after a function's last
  instruction or in the middle of a function;
- an `$a`/`$t` row inside a function marks where its code resumes after a
  mid-function pool.

A function row is sized to its last instruction, so it covers any
mid-function pools but not its trailing one. These names are the ARM
convention, so `Placeholder=false`.

### `RTTI`
Derived from the binary's run-time type information by the RTTI scripts in
[3ds-Ghidra-Scripts-Java](https://github.com/AlgebraManiacABC/3ds-Ghidra-Scripts-Java/tree/claude)
([`util/RTTIUtil.java`](https://github.com/AlgebraManiacABC/3ds-Ghidra-Scripts-Java/blob/claude/util/RTTIUtil.java),
[`util/VtableScan.java`](https://github.com/AlgebraManiacABC/3ds-Ghidra-Scripts-Java/blob/claude/util/VtableScan.java),
[`util/RenameVTableFunctions.java`](https://github.com/AlgebraManiacABC/3ds-Ghidra-Scripts-Java/blob/claude/util/RenameVTableFunctions.java)).
This covers:

- `_ZTS` typeinfo names, `_ZTI` typeinfo objects, `_ZTV` vtables
- `_ZTT` VTTs, `_ZTC` construction vtables, and the `_ZT_B…` / `_ZT_C…`
  vtable-group labels
- `_ZTh…` / `_ZTv…` adjustor thunks
- `D0`/`D1`/`D2` destructors (from vtable slots 0-1 and the RTTI class name)
- methods whose signature is carried from an imported seed up or down the
  primary-base chain (e.g. `_ZNKSt9exception4whatEv`, spelled from
  `static.crs`'s `_ZNKSt14__rw_exception4whatEv`)
- `__cxa_pure_virtual`, identified from the pure-virtual vtable slots
- `VF##` slot placeholders (`Placeholder=true`): the class and slot are known,
  the method's real name and signature are not
- `D1_<n>` (`Placeholder=true`): the `D1` of a secondary sub-vtable

### `CRO0`
Taken from a module's own link tables. `CRO0` is the magic shared by `.cro`
modules and `static.crs`, so the tag covers both:

- names in a module's named export/import string tables
- the CRO header entry points (`nnroControlObject_`, `OnLoad`, `OnExit`,
  `OnUnresolved`)

A name spelled out verbatim in one of these tables is tagged `CRO0` even when
the RTTI scripts would also derive it (e.g. the `_ZTS…` names `static.crs`
exports).

### `svc`
SVC wrappers labelled by
[`LabelSVCFunctions.java`](https://github.com/AlgebraManiacABC/3ds-Ghidra-Scripts-Java/blob/claude/LabelSVCFunctions.java),
which recognises the `swi` instruction and places the function in the `nn::svc`
namespace. The identification is not certain, so these are
`Placeholder=true`.

### `Veneer`
`$Ven$…` stubs named by `nameLinkerVeneers()` in
[`util/RenameVTableFunctions.java`](https://github.com/AlgebraManiacABC/3ds-Ghidra-Scripts-Java/blob/claude/util/RenameVTableFunctions.java#L6360),
in armlink's own
`$Ven$<from><to>$<form>$$<target>` spelling. A stub is named only when its
bytes are exactly one of armlink's veneer encodings:

| Bytes                               | Name                                                 | Target            |
|-------------------------------------|------------------------------------------------------|-------------------|
| `LDR pc,[pc,#-4]` + literal         | `$Ven$AA$L$$`, or `$Ven$AT$L$$` if the literal is Thumb | the literal       |
| `ADD r12,pc,#NN` ; `BX r12`         | `$Ven$AT$I$$`                                        | `entry + 8 + NN`  |
| Thumb `BX pc` ; `NOP`               | `$Ven$TA$I$$`                                        | the next instruction |

CRO import (PLT) stubs share the `LDR pc` encoding and are excluded first.

The jump target is decoded from the instructions and should be reliable. That the
stub is a linker veneer at all is an inference from its encoding -- a
hand-written trampoline with the same bytes would look identical -- and the
`<target>` part is whatever the target was called at the time (usually
`FUN_…`). Hence `Placeholder=true`.

### BSim matches against other titles
A few 3DS releases shipped with their `.axf`, symbols included. Where ACNL
links the same ARM runtime-library code, Ghidra's BSim matched the ACNL function to its named counterpart in one of them:

| Tag       | Source `.axf`                     |
|-----------|-----------------------------------|
| `SM2012`  | *The Amazing Spider-Man* (2012)   |
| `SM_EoT`  | *Spider-Man: Edge of Time*        |
| `bowling` | *Brunswick Pro Bowling*           |

These are the toolchain's own names, so `Placeholder=false`.

### `Smash4`
*Super Smash Bros. for Nintendo 3DS* ships a `static.crs` that exports a
large number of symbols by name, runtime-library functions among them. Names
matched to those exports are tagged `Smash4`; like the `.axf` matches above,
they are the toolchain's own names, so `Placeholder=false`.

### `CTR-P-ADCK`
*Nintendogs + Cats: Toy Poodle & New Friends* (Korean release, `CTR-P-ADCK`)
ships a full symbol map in its RomFS at `debug/memmap.txt`. Ghidra's Function
ID matched ACNL functions to those names, mostly SDK and middleware code
(`nn::`, `nw::`, `sead::`, `imgdb::`, `CFL`, `nngx`, `gl`). The names come
from a real symbol table, so `Placeholder=false`, except
`<name>_<address>` (`Placeholder=true`): one of several identical copies that
Function ID gave the same name. Since names must be unique, each copy
carries its address.

Not imported: matches that Function ID flagged `FID_conflict:`, matches
where the same name also landed on a smaller function, bare method names
such as `GetPan` whose class was lost (`memmap.txt` only has them qualified,
often under several classes), and thunks, which keep their
`<target>_<address>` names rather than taking the name of the function they
jump to.

### `Claude_analysis`
Identified by Claude from the code alone, by its similarity to a function
already named another way (e.g. the `__hardfp_*` functions next to
`__hardfp_cosf`). `Placeholder=true` until confirmed by a stronger source.
The evidence for each is recorded in [`Claude_analysis.md`](Claude_analysis.md).

### `Float`
Single words of a literal pool that hold a float constant, named for their
value: `ZERO_f`, `ONE_HALF_f`, `ONE_f`, `TWO_f`, `1_DIV_900_f`, `1_DIV_2700_f`. The
compiler never names pool entries, so there is no original name to recover;
the value is checked against the bytes, so `Placeholder=false`.

### `AlgebraManiacABC`
Named by hand by AlgebraManiacABC. How each name was arrived at is recorded
in [`AlgebraManiacABC.md`](AlgebraManiacABC.md).
Other contributors' hand-named symbols get a tag of their own name and a
matching file in this directory.

### `Pienco`
Named by Pienco. See [`Pienco.md`](Pienco.md).

### Blank
No provenance established yet. Fill the tag in once the source of the name
is known, adding a new tag here if none fits. A hand-assigned name with no
decomp work behind it is better reverted to Ghidra's default than left
blank.
