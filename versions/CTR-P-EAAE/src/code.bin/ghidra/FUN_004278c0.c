/**
 * FUN_004278c0.c
 * Source line: 591282
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_004278c0(int param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return 0;
  }
  if (((param_2 == 1) && (param_3 - 0x100000U < 0x3ff00000)) && (param_4 != 0)) {
    *(undefined1 *)(param_1 + 4) = 1;
    *(int *)(param_1 + 8) = param_3;
    *(int *)(param_1 + 0xc) = param_4;
    return 0;
  }
  return 0xe0e14826;
}
