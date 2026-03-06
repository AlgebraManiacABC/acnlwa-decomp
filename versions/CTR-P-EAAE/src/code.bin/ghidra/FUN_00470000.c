/**
 * FUN_00470000.c
 * Source line: 641201
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00470000(int param_1,int param_2,int param_3,uint param_4)

{
  if ((*(char *)(param_1 + 4) != '\0') && (param_4 < 4)) {
    param_1 += param_4 * 8;
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
