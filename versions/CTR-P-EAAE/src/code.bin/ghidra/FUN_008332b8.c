/**
 * FUN_008332b8.c
 * Source line: 1241151
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_008332b8(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 < param_3) {
    uVar1 = (int)(param_3 - param_2) / 0xc & 1;
  }
  else {
    uVar1 = 0;
  }
  for (iVar2 = uVar1 + 1; iVar2 < (int)(param_3 - param_2) / 0xc + 1; iVar2 += 2) {
  }
  return;
}
