/**
 * FUN_005434dc.c
 * Source line: 786588
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005434dc(int param_1,int param_2)

{
  int iVar1;
  
  FUN_00135740(param_1 + 0x70);
  iVar1 = FUN_0074e928(param_1 + 0x60,*(int *)(param_1 + 0x6c) + param_2);
  if (-1 < iVar1) {
    FUN_0013bb00(*(int *)(param_1 + 0x6c) + param_2);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
  }
  FUN_00137e84(param_1 + 0x70);
  if (*(int *)(param_1 + 0x68) == 0) {
    iVar1 = FUN_004cad5c();
    *(undefined4 *)(iVar1 + 0x1e8) = 0;
    coproc_moveto_Data_Memory_Barrier(0);
    *(undefined4 *)(iVar1 + 0x1ec) = 0;
  }
  return;
}
