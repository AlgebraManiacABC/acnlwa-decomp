/**
 * FUN_002b6a00.c
 * Source line: 354142
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_002b6a00(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xc) = *param_2;
  *(undefined4 *)(param_1 + 0x10) = param_2[1];
  *(undefined4 *)(param_1 + 0x14) = param_2[2];
  *(undefined4 *)(param_1 + 0x18) = param_2[3];
  *(undefined4 *)(param_1 + 0xc4) = param_2[4];
  *(undefined4 *)(param_1 + 200) = param_2[5];
  *(undefined4 *)(param_1 + 0xc0) = param_2[6];
  return;
}
