/**
 * FUN_006a9a40.c
 * Source line: 1005618
 * Body lines: 11
 */
#include "../../../include/types.h"

bool FUN_006a9a40(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3e4ccccd;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (param_2 != 0) {
    uVar1 = 0x3f800000;
  }
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 8) = uVar1;
  return param_2 != 0;
}
