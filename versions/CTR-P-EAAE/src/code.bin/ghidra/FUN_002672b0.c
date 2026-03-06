/**
 * FUN_002672b0.c
 * Source line: 312977
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002672b0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0(param_1[0x349]);
  if (iVar1 != 0) {
    FUN_00569420(param_1 + 0x29c,param_1[0x349]);
    FUN_002b6d20(param_1 + param_1[0x61f] * 0x4c + 0x34d,0);
    FUN_00817ac4(param_1 + 0x290,FUN_002673a0,0);
    return;
  }
  if (*(float *)(param_1[0x349] + 8) == 0.0) {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  FUN_00569544(param_1[0x349]);
  return;
}
