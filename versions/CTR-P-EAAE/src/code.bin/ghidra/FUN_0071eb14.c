/**
 * FUN_0071eb14.c
 * Source line: 1076242
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0071eb14(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x94))(param_1);
  if (((iVar1 == 0) || (param_1[0x65] != param_2)) || (param_1[0x66] != param_3)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
