/**
 * FUN_00742500.c
 * Source line: 1099827
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_00742500(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)(param_1 + 0x14);
  if (param_2 < *puVar1) {
    iVar2 = (int)puVar1 + puVar1[param_2 * 2 + 2];
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
