/**
 * FUN_003e1cd0.c
 * Source line: 556403
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_003e1cd0(undefined4 *param_1,int param_2,int param_3)

{
  *param_1 = &UNK_008fed3c;
  param_1[1] = param_2;
  param_1[2] = param_3;
  if ((param_2 != 0) && (param_3 == 0)) {
    param_1[2] = param_2 + 0xc;
  }
  return;
}
