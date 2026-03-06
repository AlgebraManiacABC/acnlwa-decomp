/**
 * FUN_00659f14.c
 * Source line: 967458
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00659f14(undefined4 param_1,undefined4 param_2,float *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  FUN_005d41b8(iVar1 + 0x14,param_2);
  *(short *)(iVar1 + 0xe) = (short)(int)(*param_3 * 4.0);
  *(short *)(iVar1 + 0x10) = (short)(int)(param_3[1] * 4.0);
  *(short *)(iVar1 + 0x12) = (short)(int)(param_3[2] * 4.0);
  FUN_0064d0b8(param_1,0xb0,iVar1,0);
  return;
}
