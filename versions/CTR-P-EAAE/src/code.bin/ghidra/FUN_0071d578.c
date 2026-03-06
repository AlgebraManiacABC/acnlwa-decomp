/**
 * FUN_0071d578.c
 * Source line: 1075060
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_0071d578(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    uVar3 = uVar2 + 1;
    if ((*(byte *)(param_1 + uVar2 * 0x7dd8 + 0x7dd6) & 1) == 0) {
      iVar1 += 1;
    }
    uVar2 = uVar3;
  } while (uVar3 < 0x10);
  return iVar1;
}
