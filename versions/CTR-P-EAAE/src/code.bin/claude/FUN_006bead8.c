/**
 * FUN_006bead8.c
 * Source line: 1020212
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_006bead8(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x73c) = *param_2;
  *(undefined4 *)(param_1 + 0x740) = param_2[1];
  *(undefined4 *)(param_1 + 0x744) = param_2[2];
  return;
}
