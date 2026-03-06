/**
 * FUN_00427974.c
 * Source line: 591319
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_00427974(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 10) {
    iVar1 = param_1 + param_2 * 0x68 + 8;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
