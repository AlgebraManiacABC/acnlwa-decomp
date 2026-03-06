/**
 * FUN_004b4b44.c
 * Source line: 693383
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_004b4b44(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_2 = param_1;
  iVar1 = *(int *)(param_1 + 0x10) + param_1;
  param_2[1] = iVar1;
  param_2[2] = *(int *)(param_1 + 0x18) + param_1;
  iVar2 = *(int *)(iVar1 + 8);
  param_2[4] = iVar1 + iVar2 * 0xc;
  param_2[3] = iVar2;
  param_2[5] = *(int *)(param_1 + 0x14);
  param_2[6] = 0;
  return 1;
}
