/**
 * FUN_0013c3c0.c
 * Source line: 148707
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_0013c3c0(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0xc));
  if ((param_2 < *puVar1) && ((short)puVar1[param_2 * 2 + 1] == 0x4900)) {
    iVar2 = (int)puVar1 + puVar1[param_2 * 2 + 2];
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
