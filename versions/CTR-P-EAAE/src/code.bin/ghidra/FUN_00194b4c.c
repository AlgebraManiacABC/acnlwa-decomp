/**
 * FUN_00194b4c.c
 * Source line: 206489
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00194b4c(int param_1)

{
  if (*(char *)(param_1 + 0x1c00) == '\0') {
    FUN_004b6d74(*(undefined4 *)(param_1 + 0x1bfc),*(undefined4 *)(param_1 + 0x1a2c));
    *(undefined1 *)(param_1 + 0x1c00) = 1;
  }
  FUN_004b9b64(param_1 + 0x2a0);
  FUN_005697e0(0,param_1 + 0x7f8);
  FUN_004b9b64(param_1 + 0x684,param_1 + 0x910);
  return;
}
