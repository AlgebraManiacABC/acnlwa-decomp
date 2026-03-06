/**
 * FUN_0067a500.c
 * Source line: 983864
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0067a500(int param_1)

{
  if ((*(byte *)(param_1 + 0x8c7) & 1) != 0) {
    FUN_00656e5c(0,param_1);
    *(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) | 8;
    *(byte *)(param_1 + 0x17b) = *(byte *)(param_1 + 0x17b) | 8;
  }
  FUN_0068db1c(0,0x3f800000,0x40c00000,0x40c00000,0x40c00000,param_1,0x11f,0,0,0xf);
  FUN_0068dc14(param_1,0x1000546,0);
  return;
}
