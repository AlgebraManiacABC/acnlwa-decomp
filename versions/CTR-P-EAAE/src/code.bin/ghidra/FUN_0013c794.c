/**
 * FUN_0013c794.c
 * Source line: 149120
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_0013c794(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00141764(*(undefined4 *)(param_1 + 0x3c));
  if (puVar1 != NULL) {
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
    param_3[2] = (int)puVar1 + puVar1[3];
  }
  return puVar1 != NULL;
}
