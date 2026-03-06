/**
 * FUN_004c57bc.c
 * Source line: 705906
 * Body lines: 10
 */
#include "../../../include/types.h"

bool FUN_004c57bc(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_3 + param_2;
  uVar1 = param_2 + 0x1fU & 0xffffffe0;
  if (uVar1 <= uVar2) {
    *(uint *)(param_1 + 0xc) = uVar1;
    *(uint *)(param_1 + 0x10) = uVar2;
    *(uint *)(param_1 + 0x14) = uVar1;
  }
  return uVar1 <= uVar2;
}
