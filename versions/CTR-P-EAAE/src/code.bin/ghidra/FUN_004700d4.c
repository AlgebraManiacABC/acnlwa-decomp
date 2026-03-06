/**
 * FUN_004700d4.c
 * Source line: 641251
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004700d4(int param_1,int param_2,int param_3)

{
  if (*(char *)(param_1 + 4) != '\0') {
    if (param_2 == 0 || param_3 == 0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    else {
      *(int *)(param_1 + 0x20) = param_2;
      *(int *)(param_1 + 0x24) = param_3;
    }
  }
  return;
}
