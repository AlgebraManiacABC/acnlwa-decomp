/**
 * FUN_00302a5c.c
 * Source line: 400174
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00302a5c(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    for (uVar1 = *(uint *)(param_1 + uVar2 * 4); uVar1 != 0; uVar1 >>= 1) {
    }
    uVar2 += 1;
  } while (uVar2 < 0xba);
  FUN_002fae84();
  return;
}
