/**
 * FUN_00143504.c
 * Source line: 155801
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_00143504(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x34));
  if ((param_2 & 0xffffff) < *puVar1) {
    iVar2 = (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
