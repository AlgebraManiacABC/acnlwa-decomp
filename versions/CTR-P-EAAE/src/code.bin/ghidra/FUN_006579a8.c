/**
 * FUN_006579a8.c
 * Source line: 966076
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_006579a8(undefined4 param_1,undefined4 *param_2,float *param_3,undefined1 param_4,
                 undefined1 param_5)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined4 *)(iVar1 + 0xe) = *param_2;
  *(short *)(iVar1 + 0x12) = (short)(int)(*param_3 * 4.0);
  *(short *)(iVar1 + 0x14) = (short)(int)(param_3[2] * 4.0);
  *(undefined1 *)(iVar1 + 0x17) = param_4;
  *(undefined1 *)(iVar1 + 0x18) = param_5;
  FUN_0064d0b8(param_1,0x73,iVar1,0);
  return;
}
