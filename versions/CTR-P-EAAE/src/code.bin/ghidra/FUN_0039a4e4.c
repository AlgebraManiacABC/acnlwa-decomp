/**
 * FUN_0039a4e4.c
 * Source line: 504624
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0039a4e4(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  int iVar2;
  undefined4 uStack_14;
  
  piVar1 = (int *)(param_1 + 0xc);
  iVar2 = param_1;
  uStack_14 = param_2;
  (**(code **)(*piVar1 + 8))();
  FUN_007d4afc(param_1 + 0x34,&uStack_14,extraout_r2,extraout_r3,iVar2);
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}
