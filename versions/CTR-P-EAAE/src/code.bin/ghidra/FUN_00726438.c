/**
 * FUN_00726438.c
 * Source line: 1080136
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00726438(char *param_1,uint *param_2,int param_3)

{
  *param_2 = (uint)(*param_1 != '\0') | (uint)(byte)param_1[2] << 4 | (uint)(byte)param_1[1] << 8;
  param_2[1] = 0x30104;
  if (param_3 != 0) {
    FUN_00132ea8(*(int *)(param_1 + 4) + 0x7c,param_2 + 2,1);
    return;
  }
  return;
}
