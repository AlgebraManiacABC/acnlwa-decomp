/**
 * FUN_0057dcd8.c
 * Source line: 825230
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0057dcd8(int param_1)

{
  FUN_00580490(param_1,1);
  DAT_0094fd58 &= 0xfffffeff;
  FUN_0050c520(*(undefined4 *)(param_1 + 0x564),1);
  (**(code **)(**(int **)(param_1 + 0x564) + 0x10))();
  if (*(char *)(param_1 + 0x11b0) == '\x01') {
    (**(code **)(**(int **)(param_1 + 0x574) + 0x10))();
  }
  *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x184) = 2;
  return;
}
