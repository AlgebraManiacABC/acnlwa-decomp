/**
 * FUN_002858ec.c
 * Source line: 329574
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_002858ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_2c [3];
  undefined1 auStack_20 [16];
  
  uVar2 = FUN_002fb378();
  param_1 += 0x434;
  FUN_00118738(param_1,uVar2);
  FUN_00118792(local_2c,param_1);
  iVar1 = iRam0094f6f0;
  (**(code **)(*(int *)(iRam0094f6f0 + 0x5c) + 8))((int *)(iRam0094f6f0 + 0x5c));
  FUN_005fdf68(auStack_20,*(undefined4 *)(iVar1 + 0x60),0xc9);
  (**(code **)(local_2c[0] + 0x14))(local_2c,auStack_20);
  FUN_0011872a(param_1);
  FUN_002fb94c();
  return;
}
