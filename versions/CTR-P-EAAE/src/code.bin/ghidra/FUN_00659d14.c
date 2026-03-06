/**
 * FUN_00659d14.c
 * Source line: 967387
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00659d14(undefined4 param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4,
                 float *param_5)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined4 *)(iVar1 + 0xe) = *param_2;
  *(undefined1 *)(iVar1 + 0x12) = param_3;
  *(undefined1 *)(iVar1 + 0x13) = param_4;
  *(short *)(iVar1 + 0x14) = (short)(int)(*param_5 * 4.0);
  *(short *)(iVar1 + 0x16) = (short)(int)(param_5[2] * 4.0);
  *(undefined1 *)(iVar1 + 0x18) = 0;
  FUN_0064d0b8(param_1,0x72,iVar1,0);
  return;
}
