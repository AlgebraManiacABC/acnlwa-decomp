/**
 * FUN_0036cfb4.c
 * Source line: 474714
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0036cfb4(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_003cd24c();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  (**(code **)(*param_1 + 0x1c))(param_1);
  FUN_0036ce98(param_1,0);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 1;
}
