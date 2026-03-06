/**
 * FUN_001a3118.c
 * Source line: 210874
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_001a3118(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = GET_BYTE_00957322(param_1);
  if (iVar1 != 1) {
    iVar1 = FUN_006e225c(0);
    return (int)*(short *)(iVar1 + 0x10);
  }
  iVar1 = FUN_006e225c(0x11);
  return (int)*(short *)(iVar1 + 0x10);
}
