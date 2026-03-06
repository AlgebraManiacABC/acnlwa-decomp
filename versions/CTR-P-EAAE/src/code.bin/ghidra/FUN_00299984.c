/**
 * FUN_00299984.c
 * Source line: 339467
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00299984(int param_1,int param_2)

{
  uint uVar1;
  
  *(char *)(param_1 + 0x6f8) = (char)param_2;
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x6dc) & 0xfffffff7;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x6dc) | 8;
  }
  *(uint *)(param_1 + 0x6dc) = uVar1;
  return;
}
