/**
 * FUN_005e34c4.c
 * Source line: 893528
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005e34c4(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  *(undefined4 *)(param_1 + 0x18) = param_6;
  param_1[0x1c] = param_7;
  return;
}
