/**
 * FUN_00676570.c
 * Source line: 981881
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00676570(int param_1)

{
  undefined2 uVar1;
  undefined1 auStack_18 [12];
  
  uVar1 = 0;
  FUN_0068db1c(0,0x3f800000,0x40a00000,0x40c00000,0x40c00000,param_1,0x60,0,0,0xf);
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    FUN_007622f0(0xc1000000,param_1,auStack_18,CONCAT22(uVar1,*(undefined2 *)(param_1 + 0x2e)),1);
    FUN_005d41b8(param_1 + 0x8cf,auStack_18);
    FUN_005d41b8(param_1 + 0x8d3,param_1 + 0x14);
  }
  *(undefined2 *)(param_1 + 0x5b0) = 4;
  *(undefined2 *)(param_1 + 0x5b6) = 9;
  return;
}
