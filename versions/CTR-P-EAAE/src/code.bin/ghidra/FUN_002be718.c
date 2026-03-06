/**
 * FUN_002be718.c
 * Source line: 359110
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_002be718(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00301d0c(param_1 + 8,FUN_0020ba5c,0x14b0,0x20);
  uVar2 = 0;
  do {
    FUN_0020b9b0(iVar1 + -8 + uVar2 * 0x14b0 + 8);
    uVar2 += 1;
  } while (uVar2 < 0x20);
  return iVar1 + -8;
}
