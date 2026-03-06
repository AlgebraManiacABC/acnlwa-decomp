/**
 * FUN_002c3ff4.c
 * Source line: 363760
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_002c3ff4(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  
  sVar1 = (ushort)*(byte *)(param_3 + 0x1dc) * 0x820 + (ushort)*(byte *)(param_3 + 0x1dc) * -0x104 +
          -0x8000 + *(short *)(param_3 + 0x3a);
  iVar2 = FUN_002c40b4(0x42700000,param_3,(int)sVar1);
  if (((iVar2 == 0) &&
      (iVar2 = FUN_002c40b4(0x41f00000,param_1,param_2,param_3,(int)(short)(sVar1 + 0x4000)),
      iVar2 == 0)) &&
     (iVar2 = FUN_002c40b4(0x41f00000,param_1,param_2,param_3,(int)(short)(sVar1 + -0x4000)),
     iVar2 == 0)) {
    return 0;
  }
  *(undefined1 *)(param_3 + 0x11c) = 0;
  *(undefined1 *)(param_3 + 0x1dc) = 0;
  return 1;
}
