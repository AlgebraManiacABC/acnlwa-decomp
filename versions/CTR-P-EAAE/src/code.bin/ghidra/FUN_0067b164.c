/**
 * FUN_0067b164.c
 * Source line: 984260
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0067b164(int param_1)

{
  undefined2 uVar1;
  undefined1 auStack_1c [16];
  
  FUN_00759a54(auStack_1c,param_1 + 0x8ca);
  FUN_0068db1c(0,0x3f800000,0x40c00000,0x40c00000,0x40c00000,param_1,0xc5,0,0,0xf);
  *(undefined2 *)(param_1 + 0x5b6) = 0xf;
  *(undefined2 *)(param_1 + 0x5b2) = 0x28;
  *(undefined2 *)(param_1 + 0x5b0) = 0x44;
  uVar1 = FUN_0057ba08(param_1 + 0x14,auStack_1c);
  *(undefined2 *)(param_1 + 0x9e0) = uVar1;
  *(undefined4 *)(param_1 + 0x9e4) = 0x3ef0f0f1;
  FUN_0068dc14(param_1,0x1000625,0);
  *(byte *)(param_1 + 0x17b) = *(byte *)(param_1 + 0x17b) | 8;
  return;
}
