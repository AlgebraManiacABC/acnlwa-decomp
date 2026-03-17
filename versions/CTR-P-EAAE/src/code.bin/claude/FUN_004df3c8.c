/**
 * FUN_004df3c8.c
 * Source line: 724312
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_004df3c8(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x74) = *param_2;
  *(undefined4 *)(param_1 + 0x78) = param_2[1];
  *(undefined4 *)(param_1 + 0x7c) = param_2[2];
  return;
}
