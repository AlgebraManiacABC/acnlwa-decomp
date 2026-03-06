/**
 * FUN_002b39d0.c
 * Source line: 352867
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002b39d0(int param_1)

{
  FUN_00220be0(param_1 + 0xa7c);
  *(undefined1 *)(param_1 + 0x583) = 0;
  if (*(int *)(param_1 + 0x574) != -1) {
    FUN_00223cec(param_1 + 0xbe68,*(int *)(param_1 + 0x574),0);
    *(undefined4 *)(param_1 + 0x574) = 0xffffffff;
  }
  if ((*(char *)(param_1 + 0x586) == '\0') && (*(char *)(param_1 + 0xa78) == '\x01')) {
    FUN_0031e570(param_1 + 0x58c);
  }
  *(undefined4 *)(param_1 + 0x57c) = 0xffffffff;
  return;
}
