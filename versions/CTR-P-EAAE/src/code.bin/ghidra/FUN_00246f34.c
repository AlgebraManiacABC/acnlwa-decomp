/**
 * FUN_00246f34.c
 * Source line: 297251
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00246f34(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 < 0x3c) && (iVar1 = param_1 + param_2 * 4, *(int *)(iVar1 + 0x14) != 0)) {
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + -1;
  }
  return;
}
