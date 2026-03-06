/**
 * FUN_0031cc54.c
 * Source line: 421928
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined1 * FUN_0031cc54(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_18 [4];
  
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  uVar2 = FUN_002ff8b0(4);
  uVar3 = FUN_002fb918();
  uVar2 = FUN_001df350(uVar3,uVar2);
  FUN_006ccf70(auStack_18,uVar2,param_1[0x617],param_1[param_1[0x617] + 0x618] + -1,uVar1,param_3);
  return auStack_18;
}
