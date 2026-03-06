/**
 * FUN_00543454.c
 * Source line: 786565
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00543454(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    iVar1 = FUN_004cad5c();
    *(int *)(iVar1 + 0x1ec) = param_1;
    coproc_moveto_Data_Memory_Barrier(0);
    *(code **)(iVar1 + 0x1e8) = FUN_00543390;
  }
  FUN_00135740(param_1 + 0x70);
  iVar1 = FUN_0074e928(param_1 + 0x60,*(int *)(param_1 + 0x6c) + param_2);
  if (iVar1 == -1) {
    FUN_00138560(param_1 + 0x60,*(int *)(param_1 + 0x6c) + param_2);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  }
  FUN_00137e84(param_1 + 0x70);
  return;
}
