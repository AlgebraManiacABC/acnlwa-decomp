/**
 * FUN_006d3340.c
 * Source line: 1032888
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_006d3340(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = 0;
  uVar2 = 0;
  iVar3 = 0x10;
  do {
    if (((uint)DAT_0094fd34 & 1 << (uVar2 & 0xff)) != 0) {
      iVar1 += 1;
    }
    iVar3 += -1;
    uVar2 += 1;
  } while (iVar3 != 0);
  return iVar1;
}
