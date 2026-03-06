/**
 * FUN_007166a4.c
 * Source line: 1070526
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_007166a4(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,uint param_6)

{
  undefined4 *puVar1;
  
  if (param_6 < 6) {
    param_1 += param_6 * 0x302;
  }
  puVar1 = (undefined4 *)(&UNK_0088f0b8 + (uint)*(byte *)(param_1 + 0x36) * 0x10 + param_6 * 0x50);
  *param_2 = *puVar1;
  *param_3 = puVar1[1];
  *param_4 = puVar1[2];
  *param_5 = puVar1[3];
  return;
}
