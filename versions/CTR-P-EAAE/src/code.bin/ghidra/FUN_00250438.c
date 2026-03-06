/**
 * FUN_00250438.c
 * Source line: 302287
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00250438(int *param_1,undefined4 param_2)

{
  undefined1 auStack_18 [12];
  
  FUN_001e5894(auStack_18);
  FUN_0020ae2c(param_1,param_2,auStack_18);
  if ((param_1[0x11] != 0) && ((**(code **)(*param_1 + 0x14))(param_1), param_1[0x11] != 0)) {
    (**(code **)(*param_1 + 0x34))(param_1[7],param_1,0);
    FUN_00321b08(param_1[8],param_1[9],param_1 + 0x11,param_1[10],param_1 + 0x12);
  }
  param_1[0x10] = param_1[0x10] + 1;
  return;
}
