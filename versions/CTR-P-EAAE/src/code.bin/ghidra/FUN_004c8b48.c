/**
 * FUN_004c8b48.c
 * Source line: 708396
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_004c8b48(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  while (iVar1 = FUN_0014214c(param_1,&local_10), iVar1 != 0) {
    FUN_004c6c78(local_10);
    coproc_moveto_Data_Memory_Barrier(0);
    FUN_00142364(param_1 + 0xb4,local_10);
  }
  return;
}
