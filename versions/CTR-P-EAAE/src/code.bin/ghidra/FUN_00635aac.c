/**
 * FUN_00635aac.c
 * Source line: 950621
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00635aac(int param_1)

{
  FUN_00632648(*(int *)(param_1 + 0xf0) + 0xfe0,*(int *)(param_1 + 0xf0),0);
  *(byte *)(param_1 + 0x2d1) = *(byte *)(param_1 + 0x2d1) & 0xfe;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  return;
}
