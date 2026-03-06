/**
 * FUN_006d0050.c
 * Source line: 1030745
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_006d0050(char *param_1,undefined4 param_2)

{
  if (*param_1 != '\0') {
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_004f2d48(*(int *)(param_1 + 0x6c),0,0xffffffff,0xffffffff,0xffffffff,param_2);
    }
    if (*(int *)(param_1 + 0x70) != 0) {
      FUN_004f2d48(*(int *)(param_1 + 0x70),0,0xffffffff,0xffffffff,0xffffffff,param_2);
    }
    if (*(int *)(param_1 + 0x74) != 0) {
      FUN_004f2d48(*(int *)(param_1 + 0x74),0,0xffffffff,0xffffffff,0xffffffff,param_2);
    }
  }
  return;
}
