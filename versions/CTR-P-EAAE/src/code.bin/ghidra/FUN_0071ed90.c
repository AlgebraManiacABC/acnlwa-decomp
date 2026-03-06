/**
 * FUN_0071ed90.c
 * Source line: 1076372
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0071ed90(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (((int)param_2 < *(int *)(param_1 + 0x2780)) || (*(int *)(param_1 + 0x2780) + 8U <= param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
