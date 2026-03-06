/**
 * FUN_005e626c.c
 * Source line: 896221
 * Body lines: 10
 */
#include "../../../include/types.h"

FUN_005e626c(int param_1,int *param_2,uint param_3,undefined1 param_4,undefined4 param_5,
            undefined4 param_6)

{
  *(char *)(param_1 + 100) = (char)param_3;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x68) = param_5;
  *(undefined4 *)(param_1 + 0x6c) = param_6;
  *(undefined1 *)(param_1 + 0x74) = param_4;
  if (((*(int *)(param_1 + 0x60) != 0) && (param_3 < 0xb)) && (*param_2 != 0)) {
    FUN_006019b0(param_1,param_2,0x95df14);
    FUN_0060184c(param_1,0x95df14);
  }
  return *(undefined4 *)(param_1 + 0x70);
}
