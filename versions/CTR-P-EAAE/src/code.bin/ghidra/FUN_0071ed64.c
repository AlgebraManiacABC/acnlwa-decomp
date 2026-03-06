/**
 * FUN_0071ed64.c
 * Source line: 1076355
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0071ed64(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (((int)param_2 < *(int *)(param_1 + 0x3520)) || (*(int *)(param_1 + 0x3520) + 10U <= param_2))
  {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
