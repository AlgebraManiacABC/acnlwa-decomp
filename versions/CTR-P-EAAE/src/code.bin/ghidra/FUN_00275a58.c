/**
 * FUN_00275a58.c
 * Source line: 320900
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00275a58(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(*(int *)(param_1 + 0xc) + ((int)param_2 >> 5) * 4);
  uVar1 = 1 << (param_2 & 0x1f);
  if ((uVar2 & uVar1) == 0) {
    *(uint *)(*(int *)(param_1 + 0xc) + ((int)param_2 >> 5) * 4) = uVar2 | uVar1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  return;
}
