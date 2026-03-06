/**
 * FUN_006a97a0.c
 * Source line: 1005412
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_006a97a0(int *param_1,int param_2,int param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_2 * 0x200;
  param_1[3] = param_3 * 0x200;
  FUN_006a5e04(param_1 + 4);
  return 1;
}
