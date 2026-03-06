/**
 * FUN_0076f2d8.c
 * Source line: 1132353
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0076f2d8(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((((*(int *)(param_1 + 0x6aa4) < *(int *)(param_1 + 0x6a90)) ||
       (*(int *)(param_1 + 0x6a90) == 0)) && (*(int *)(param_1 + 0x6aa8) <= param_2)) &&
     (param_2 <= *(int *)(param_1 + 0x6a94))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
