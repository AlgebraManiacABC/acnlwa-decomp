/**
 * FUN_002adaac.c
 * Source line: 350620
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_002adaac(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00521a00();
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if ((iVar1 != 0) && (iVar1 = (**(code **)(*param_1 + 0x40))(param_1), iVar1 != 0)) {
    uVar2 = FUN_0018fc84();
    iVar1 = FUN_001905b0(uVar2,param_1 + 0x47);
    if (iVar1 != 0) {
      FUN_004ee364(param_1 + 0x47,param_1[5]);
    }
  }
  return 2;
}
