/**
 * FUN_00685118.c
 * Source line: 989003
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00685118(int param_1)

{
  if ((*(byte *)(param_1 + 0x8c7) & 1) != 0) {
    FUN_00656e5c(0,param_1);
    *(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) | 8;
    *(byte *)(param_1 + 0x17b) = *(byte *)(param_1 + 0x17b) | 8;
  }
  FUN_0068db1c(0,0x3f800000,0x40c00000,0x40c00000,0x40c00000,param_1,0x140,0,0,0xf);
  FUN_0068dc14(param_1,0x10005e8,1);
  return;
}
