/**
 * FUN_006f83a8.c
 * Source line: 1053294
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_006f83a8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_3 + 8) = *param_4;
  *(undefined4 *)(param_3 + 0xc) = param_4[1];
  *(undefined4 *)(param_3 + 0x10) = param_4[2];
  *(undefined4 *)(param_3 + 0x14) = param_1;
  *(undefined4 *)(param_3 + 0x18) = param_2;
  return;
}
