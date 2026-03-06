/**
 * FUN_0029c150.c
 * Source line: 340820
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0029c150(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_00135748(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0x298);
  FUN_001357ec(param_1 + 8);
  if (((*(int *)(param_1 + 0x48) == 0) || (iVar1 = FUN_007475e0(), iVar1 != 0)) && (0xb < uVar2)) {
    if (*(byte *)(param_1 + 0x294) < 0x10) {
      *(undefined1 *)(param_1 + 0x294) = 0xd;
          // WARNING: Could not recover jumptable at 0x0029c790. Too many branches
          // WARNING: Treating indirect jump as call
      (*(code *)&UNK_0029c434)();
      return;
    }
    return;
  }
  return;
}
