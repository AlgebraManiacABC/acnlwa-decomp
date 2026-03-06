/**
 * FUN_002d6e48.c
 * Source line: 374501
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_002d6e48(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00521a00();
  iVar1 = (**(code **)(*param_1 + 0x4c))(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_0018fc84();
    iVar1 = FUN_001905b0(uVar2,param_1 + 0x2d);
    if (iVar1 != 0) {
      FUN_004ee364(param_1 + 0x2d,param_1[5]);
    }
  }
  return 2;
}
