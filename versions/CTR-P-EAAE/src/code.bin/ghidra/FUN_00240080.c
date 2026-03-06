/**
 * FUN_00240080.c
 * Source line: 294222
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00240080(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  
  piVar1 = (int *)0xab7de4;
  if (param_3 < 4) {
    piVar1 = (int *)(param_3 * 4 + 0xab7de4);
  }
  if (*piVar1 != 0) {
    FUN_007206e0(*piVar1,param_1,param_2);
    return;
  }
  return;
}
