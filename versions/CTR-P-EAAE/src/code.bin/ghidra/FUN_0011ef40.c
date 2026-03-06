/**
 * FUN_0011ef40.c
 * Source line: 121975
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0011ef40(int param_1)

{
  if (iRam00adf95c != 0) {
    if (param_1 == -1) {
      *(undefined1 *)(iRam00adf95c + 0x3c) = 1;
    }
    else {
      *(undefined1 *)(*(int *)(iRam00adf95c + 0x18) + param_1 * 0x1c + -0x1b) = 1;
    }
  }
  return;
}
