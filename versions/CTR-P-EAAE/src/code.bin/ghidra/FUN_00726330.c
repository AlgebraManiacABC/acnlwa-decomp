/**
 * FUN_00726330.c
 * Source line: 1080090
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00726330(char *param_1,uint *param_2,int param_3)

{
  *param_2 = (uint)(*param_1 != '\0') | (uint)(byte)param_1[4] << 4 | (uint)(byte)param_1[1] << 8 |
             *(int *)(param_1 + 8) << 0x10 | *(int *)(param_1 + 0xc) << 0x18;
  param_2[1] = 0xf0105;
  param_2[2] = (uint)(byte)param_1[0x10] | (uint)(byte)param_1[0x11] << 4 |
               (uint)(byte)param_1[0x12] << 8;
  param_2[3] = 0xf0106;
  if (param_3 != 0) {
    FUN_00132ea8(*(int *)(param_1 + 0x14) + 0x7c,param_2 + 4,1);
    return;
  }
  return;
}
