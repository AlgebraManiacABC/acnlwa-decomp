/**
 * FUN_0068aa1c.c
 * Source line: 992070
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0068aa1c(undefined4 param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4,
                 undefined2 param_5,undefined1 param_6,float *param_7)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined4 *)(iVar1 + 0xe) = *param_2;
  *(undefined2 *)(iVar1 + 0x12) = param_5;
  *(undefined1 *)(iVar1 + 0x14) = param_4;
  *(undefined1 *)(iVar1 + 0x15) = param_3;
  *(undefined1 *)(iVar1 + 0x16) = param_6;
  *(short *)(iVar1 + 0x17) = (short)(int)(*param_7 * 4.0);
  *(short *)(iVar1 + 0x19) = (short)(int)(param_7[2] * 4.0);
  FUN_0064d0b8(param_1,0x3e,iVar1,0);
  return;
}
