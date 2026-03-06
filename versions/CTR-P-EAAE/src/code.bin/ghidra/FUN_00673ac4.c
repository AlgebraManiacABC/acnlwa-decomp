/**
 * FUN_00673ac4.c
 * Source line: 980488
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00673ac4(undefined4 param_1,float *param_2,undefined2 *param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(short *)(iVar1 + 0xe) = (short)(int)(*param_2 * 4.0);
  *(short *)(iVar1 + 0x10) = (short)(int)(param_2[1] * 4.0);
  *(short *)(iVar1 + 0x12) = (short)(int)(param_2[2] * 4.0);
  *(char *)(iVar1 + 0x14) = (char)((ushort)*param_3 >> 8);
  *(undefined1 *)(iVar1 + 0x15) = param_4;
  FUN_0064d0b8(param_1,0x33,iVar1,0);
  return;
}
