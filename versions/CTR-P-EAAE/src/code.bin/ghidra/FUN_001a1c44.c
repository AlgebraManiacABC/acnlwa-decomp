/**
 * FUN_001a1c44.c
 * Source line: 210000
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_001a1c44(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = GET_BYTE_00957322(param_1);
  if (iVar1 != 1) {
    iVar1 = FUN_006e225c(0x19);
    return (int)*(short *)(iVar1 + 0x10);
  }
  iVar1 = FUN_006e225c(0x10);
  return (int)*(short *)(iVar1 + 0x10);
}
