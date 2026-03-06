/**
 * FUN_001547d0.c
 * Source line: 168329
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_001547d0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = 0;
  uVar2 = 0;
  iVar3 = 0x13;
  do {
    if ((param_1 & 1 << (uVar2 & 0xff)) != 0) {
      iVar1 += 1;
    }
    iVar3 += -1;
    uVar2 += 1;
  } while (iVar3 != 0);
  return iVar1;
}
