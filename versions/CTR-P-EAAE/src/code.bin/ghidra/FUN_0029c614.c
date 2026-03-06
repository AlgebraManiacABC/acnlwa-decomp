/**
 * FUN_0029c614.c
 * Source line: 341174
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0029c614(int param_1)

{
  if (*(byte *)(param_1 + 0x294) < 0x10) {
    *(undefined1 *)(param_1 + 0x294) = 0xe;
          // WARNING: Could not recover jumptable at 0x0029c790. Too many branches
          // WARNING: Treating indirect jump as call
    (*(code *)&UNK_0029c440)();
    return;
  }
  return;
}
