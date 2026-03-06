/**
 * FUN_0029c680.c
 * Source line: 341223
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0029c680(int param_1)

{
  if (*(byte *)(param_1 + 0x294) < 0x10) {
    *(undefined1 *)(param_1 + 0x294) = 3;
          // WARNING: Could not recover jumptable at 0x0029c790. Too many branches
          // WARNING: Treating indirect jump as call
    (*(code *)&UNK_0029c458)();
    return;
  }
  return;
}
