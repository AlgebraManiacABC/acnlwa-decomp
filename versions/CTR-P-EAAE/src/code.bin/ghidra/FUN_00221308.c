/**
 * FUN_00221308.c
 * Source line: 277626
 * Body lines: 12
 */
#include "../../../include/types.h"

int * FUN_00221308(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_20 [12];
  
  uVar1 = FUN_005376d4();
  FUN_0071d7cc(uVar1,param_2);
  uVar1 = FUN_0071d7cc(uVar1,param_2);
  iVar2 = FUN_0071d648(uVar1,param_3);
  piVar3 = (int *)(param_1 + 0xb350);
  FUN_005d867c(auStack_20,iVar2 + 0x67e0,9);
  (**(code **)(*piVar3 + 0x14))(piVar3,auStack_20);
  return piVar3;
}
