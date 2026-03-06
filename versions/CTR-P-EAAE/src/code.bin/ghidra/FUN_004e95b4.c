/**
 * FUN_004e95b4.c
 * Source line: 731319
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined1 * FUN_004e95b4(undefined1 *param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_00305570(param_2);
  *param_1 = uVar1;
  if (3 < param_3) {
    param_3 = FUN_0076936c(param_2);
  }
  param_1[1] = (char)param_3;
  return param_1;
}
