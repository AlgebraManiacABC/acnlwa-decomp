/**
 * FUN_002e3758.c
 * Source line: 379521
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_002e3758(int param_1,int param_2,int param_3)

{
  bool bVar1;
  
  param_1 += (param_2 - *(int *)(param_1 + 0xc)) * 0x2b4;
  bVar1 = param_3 == 0;
  if (bVar1) {
    param_3 = 0x1000403;
  }
  *(undefined4 *)(param_1 + 0x4a4) = 0x10003f6;
  *(undefined1 *)(param_1 + 0x4af) = 1;
  if (!bVar1) {
    param_3 = 0x10003f7;
  }
  *(undefined1 *)(param_1 + 0x4b0) = 1;
  *(int *)(param_1 + 0x4a0) = param_3;
  *(undefined1 *)(param_1 + 0x4ae) = 1;
  return;
}
