/**
 * FUN_004148ac.c
 * Source line: 580505
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_004148ac(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((cRam00974a54 != '\0') && (iVar1 = FUN_007304d0(*(undefined4 *)(param_1 + 0x14)), iVar1 != 0))
  {
          // WARNING: Could not recover jumptable at 0x004148ec. Too many branches
          // WARNING: Treating indirect jump as call
    uVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x74))(*(int **)(param_1 + 0x14),param_2);
    return uVar2;
  }
  return 0xe0a14827;
}
