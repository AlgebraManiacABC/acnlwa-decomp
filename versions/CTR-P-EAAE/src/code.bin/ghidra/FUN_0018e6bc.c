/**
 * FUN_0018e6bc.c
 * Source line: 203525
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_0018e6bc(int param_1,uint param_2,uint param_3)

{
  param_1 += 8;
  if (param_3 < 7) {
    param_1 += param_3 * 0x738;
  }
  if (param_2 < 7) {
    param_1 += param_2 * 0x108;
  }
  return param_1;
}
