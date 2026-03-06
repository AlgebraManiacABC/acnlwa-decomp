/**
 * FUN_00362c1c.c
 * Source line: 467420
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00362c1c(int param_1,int param_2,int param_3)

{
  if (*(char *)(param_1 + 0x26c) == '\0') {
    if (param_3 == 0) {
      *(int *)(param_1 + 0xc0) = param_2;
    }
    else {
      FUN_00362cec(param_1);
    }
    if (param_2 != 2) {
      *(char *)(param_1 + 0x14a) = (char)param_2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x26c) = 0;
  }
  return;
}
