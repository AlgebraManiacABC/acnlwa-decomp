/**
 * FUN_00132a3c.c
 * Source line: 139173
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00132a3c(undefined4 *param_1)

{
  *param_1 = &UNK_0090abb0;
  if (param_1[1] != 0) {
    *(undefined4 *)(DAT_00952b8c + 0x14) = param_1[1];
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(DAT_00952b8c + 0x18) = param_1[2];
  }
  if (param_1[3] != 0) {
    *(undefined4 *)(DAT_00952b8c + 0x1c) = param_1[3];
  }
  return;
}
