/**
 * FUN_001942bc.c
 * Source line: 206147
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001942bc(int param_1)

{
  if (*(char *)(param_1 + 0x6b69) == '\0') {
    FUN_00694918(_DAT_0094f708,1);
  }
  if (*(char *)(param_1 + 0x1c00) == '\0') {
    FUN_004b6d74(*(undefined4 *)(param_1 + 0x1bfc),*(undefined4 *)(param_1 + 0x1a2c));
    *(undefined1 *)(param_1 + 0x1c00) = 1;
  }
  FUN_004b9b64(param_1 + 0x2a0,param_1 + 2000);
  FUN_005697e0(0,param_1 + 2000);
  FUN_004b9b64(param_1 + 0x684);
  FUN_005697e0(0,param_1 + 0x8e8);
  return;
}
