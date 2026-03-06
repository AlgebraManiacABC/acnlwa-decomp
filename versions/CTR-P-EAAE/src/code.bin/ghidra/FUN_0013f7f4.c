/**
 * FUN_0013f7f4.c
 * Source line: 151981
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_0013f7f4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_001416ec(*(undefined4 *)(param_1 + 0x3c));
  if (puVar1 != NULL) {
    *param_3 = *puVar1;
  }
  return puVar1 != NULL;
}
