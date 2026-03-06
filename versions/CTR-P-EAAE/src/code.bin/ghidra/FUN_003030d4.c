/**
 * FUN_003030d4.c
 * Source line: 400289
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_003030d4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  uVar3 = 0;
  do {
    for (uVar2 = *(uint *)(param_1 + uVar3 * 4); uVar2 != 0; uVar2 >>= 1) {
      if ((uVar2 & 1) != 0) {
        iVar1 += 1;
      }
    }
    uVar3 += 1;
  } while (uVar3 < 0xba);
  return iVar1;
}
