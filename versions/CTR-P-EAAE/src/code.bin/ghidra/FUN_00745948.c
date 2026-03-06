/**
 * FUN_00745948.c
 * Source line: 1101837
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_00745948(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_2 < 8) {
    if (param_3 == 0) {
      iVar1 = (int)*(char *)(param_1 + param_2 + 0x12);
    }
    else {
      iVar1 = (int)*(char *)(param_1 + param_2 + 10);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}
