/**
 * FUN_007b0ca0.c
 * Source line: 1153760
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_007b0ca0(int param_1,int param_2)

{
  if (iRam00adf95c != 0) {
    if (param_1 == 0x200) {
      *(int *)(iRam00adf95c + 0x2c) = param_2;
    }
    else if (param_1 == 0x20f) {
      *(bool *)(iRam00adf95c + 0x3d) = param_2 != 0;
    }
  }
  return;
}
