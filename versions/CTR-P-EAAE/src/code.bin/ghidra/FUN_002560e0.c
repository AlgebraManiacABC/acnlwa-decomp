/**
 * FUN_002560e0.c
 * Source line: 305730
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_002560e0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00521a00();
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_0018fc84();
    iVar1 = FUN_001904f0(uVar2,param_1 + 6);
    if (iVar1 != 0) {
      FUN_004ee364(param_1 + 6,param_1[5]);
      return 2;
    }
  }
  return 2;
}
