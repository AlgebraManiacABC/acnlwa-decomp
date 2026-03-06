/**
 * FUN_0029c61c.c
 * Source line: 341194
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0029c61c(int param_1)

{
  undefined4 uVar1;
  
  if (_DAT_00aaf14c == 0) {
    return;
  }
  uVar1 = FUN_0051a77c(_DAT_00aaf14c + 0x55a6,0x2e,param_1 + 0x7c,0xff);
  *(undefined1 *)(param_1 + 0x29c) = 0;
  *(int *)(param_1 + 0x4c) = param_1 + 0x7c;
  *(undefined1 *)(param_1 + 0x29d) = 0;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  if (*(byte *)(param_1 + 0x294) < 0x10) {
    *(undefined1 *)(param_1 + 0x294) = 1;
          // WARNING: Could not recover jumptable at 0x0029c790. Too many branches
          // WARNING: Treating indirect jump as call
    (*(code *)&UNK_0029c410)();
    return;
  }
  return;
}
