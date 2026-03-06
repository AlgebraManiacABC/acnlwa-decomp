/**
 * FUN_0041f11c.c
 * Source line: 586605
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0041f11c(int param_1,undefined1 *param_2)

{
  nnnstdMemCpy(param_1 + 0x139,param_2 + 0x10d,*(undefined4 *)(param_2 + 0x1d8));
  *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined1 *)(param_1 + 0x138) = param_2[0x10c];
  *(undefined1 *)(param_1 + 0x2c) = *param_2;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x2d) = param_2[1];
  nnnstdMemCpy(param_1 + 0x34,param_2 + 8,*(undefined4 *)(param_2 + 0x108));
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x108);
  return;
}
