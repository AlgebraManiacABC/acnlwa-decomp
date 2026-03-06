/**
 * FUN_0024220c.c
 * Source line: 295204
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0024220c(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = param_1;
  uStack_1c = param_2;
  FUN_00527c34(&local_20,param_3,0x1f,1);
  piVar1 = piRam00ab7e04;
  (**(code **)(*piRam00ab7e04 + 0x10))(piRam00ab7e04);
  uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  FUN_00527a2c(3,param_1,param_2,param_3 & 0xff,uVar2);
  return;
}
