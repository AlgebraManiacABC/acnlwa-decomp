/**
 * FUN_005b81b8.c
 * Source line: 866441
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_005b81b8(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2510);
  if (param_2 == 0) {
    uVar1 &= 0xffff7fff;
  }
  else {
    uVar1 |= 0x8000;
  }
  *(uint *)(param_1 + 0x2510) = uVar1;
  return;
}
