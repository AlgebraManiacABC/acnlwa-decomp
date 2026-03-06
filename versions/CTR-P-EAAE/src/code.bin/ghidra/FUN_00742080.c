/**
 * FUN_00742080.c
 * Source line: 1099466
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_00742080(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(int *)(param_1 + 0xc) + param_1);
  if ((short)puVar1[param_2 * 2 + 1] == 0x5900) {
    if (param_2 < *puVar1) {
      return puVar1[param_2 * 2 + 2] + (int)puVar1;
    }
  }
  else if ((short)puVar1[param_2 * 2 + 1] == 0x5903) {
    return 0;
  }
  return 0;
}
