/**
 * FUN_007570b0.c
 * Source line: 1112568
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_007570b0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  do {
    iVar1 = FUN_0076c6d4(param_1 + uVar2 * 0x18 + 0x24);
    if (iVar1 != 0) {
      iVar3 += 1;
    }
    uVar2 += 1;
  } while (uVar2 < 6);
  return iVar3;
}
