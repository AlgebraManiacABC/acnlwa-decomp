/**
 * FUN_0029c688.c
 * Source line: 341242
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0029c688(int param_1)

{
  if (*(byte *)(param_1 + 0x294) < 0x10) {
    *(undefined1 *)(param_1 + 0x294) = 0xf;
          // WARNING: Could not recover jumptable at 0x0029c790. Too many branches
          // WARNING: Treating indirect jump as call
    (*(code *)&UNK_0029c270)();
    return;
  }
  return;
}
