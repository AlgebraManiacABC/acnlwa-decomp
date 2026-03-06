/**
 * FUN_0075f4d4.c
 * Source line: 1119674
 * Body lines: 7
 */
#include "../../../include/types.h"

int FUN_0075f4d4(int param_1,uint param_2)

{
  if (param_2 < 4) {
    param_1 += param_2 * 0x18;
    if ((param_1 + 8 != 0) && (*(int *)(param_1 + 0x10) != -3 || *(int *)(param_1 + 0x14) != -1)) {
      return param_1 + 8;
    }
  }
  return 0;
}
