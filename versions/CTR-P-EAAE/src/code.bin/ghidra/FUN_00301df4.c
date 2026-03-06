/**
 * FUN_00301df4.c
 * Source line: 399513
 * Body lines: 7
 */
#include "../../../include/types.h"

int FUN_00301df4(int param_1,uint param_2)

{
  if (param_2 < 4) {
    param_1 += param_2 * 0xa480;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}
