/**
 * FUN_00415b1c.c
 * Source line: 581452
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00415b1c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((cRam00974a54 == '\0') || (iVar1 = FUN_007304d0(*(undefined4 *)(param_1 + 0x14)), iVar1 == 0))
  {
    uVar2 = 0xe0a14827;
  }
  else {
    if (param_2 - 0x100000U < 0x3ff00000) {
          // WARNING: Could not recover jumptable at 0x00415b78. Too many branches
          // WARNING: Treating indirect jump as call
      uVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x48))
                        (*(int **)(param_1 + 0x14),param_2,param_3);
      return uVar2;
    }
    uVar2 = 0xe0e14826;
  }
  return uVar2;
}
