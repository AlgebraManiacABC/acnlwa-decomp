/**
 * FUN_0029c230.c
 * Source line: 340878
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0029c230(int param_1)

{
  uint uVar1;
  
  FUN_00135748(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x298);
  FUN_001357ec(param_1 + 8);
  if (uVar1 < 0xb) {
    return;
  }
  if (*(byte *)(param_1 + 0x294) < 0x10) {
    *(undefined1 *)(param_1 + 0x294) = 0xc;
          // WARNING: Could not recover jumptable at 0x0029c790. Too many branches
          // WARNING: Treating indirect jump as call
    (*(code *)&UNK_002e43b8)();
    return;
  }
  return;
}
