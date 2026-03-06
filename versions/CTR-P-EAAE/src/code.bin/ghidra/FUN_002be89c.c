/**
 * FUN_002be89c.c
 * Source line: 359195
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002be89c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  do {
    iVar3 = param_1 + uVar2 * 0x7dd8;
    if (((*(byte *)(iVar3 + 0x7dd6) & 1) != 0) && (iVar1 = FUN_00725984(iVar3), iVar1 == 0)) {
      FUN_002d4100(iVar3);
    }
    uVar2 += 1;
  } while (uVar2 < 0x10);
  return;
}
