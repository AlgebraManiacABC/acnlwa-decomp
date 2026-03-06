/**
 * FUN_00376f90.c
 * Source line: 482003
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 * FUN_00376f90(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &UNK_008fbdb8;
  param_1[1] = &UNK_008fbb48;
  param_1[2] = 0;
  param_1[4] = 0xffffffff;
  param_1[3] = 0;
  FUN_0012f154(param_1 + 2);
  param_1[5] = &UNK_008fb254;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}
