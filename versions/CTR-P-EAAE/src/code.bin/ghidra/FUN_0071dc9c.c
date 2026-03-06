/**
 * FUN_0071dc9c.c
 * Source line: 1075443
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_0071dc9c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_00758104(param_1 + uVar2 * 0x280);
    if (iVar1 != 0) {
      return uVar2;
    }
    uVar2 += 1;
  } while (uVar2 < 10);
  return 0xffffffff;
}
