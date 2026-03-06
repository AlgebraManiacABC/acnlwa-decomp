/**
 * FUN_004d3a00.c
 * Source line: 716694
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_004d3a00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 400) = param_3;
  do {
    FUN_004d42c8(param_1 + iVar1 * 0x20 + 0xb4);
    iVar1 += 1;
  } while (iVar1 < 4);
  FUN_004c5318(0xc2b4cccd,param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x16c) = 0;
  FUN_004c9b58(*(undefined4 *)(param_1 + 0x1a8),param_2,param_4);
  FUN_004d3728(param_1,param_2,param_4);
  FUN_004ca278(*(undefined4 *)(param_1 + 0x1a8),*(undefined1 *)(param_1 + 0x197));
  FUN_004ca964(*(undefined4 *)(param_1 + 0x1a8));
  *(undefined1 *)(param_1 + 0x139) = 1;
  return;
}
