/**
 * FUN_005ca3ec.c
 * Source line: 878412
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_005ca3ec(uint param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0xfc && param_1 < 8) {
    iVar1 = (int)(char)(&UNK_0088dbaa)[param_1 + param_2 * 8];
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}
