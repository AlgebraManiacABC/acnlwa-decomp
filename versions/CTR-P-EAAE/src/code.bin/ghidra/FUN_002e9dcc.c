/**
 * FUN_002e9dcc.c
 * Source line: 383838
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_002e9dcc(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = FUN_00301d0c(param_1 + 2,&UNK_0061537c,0x30,0x32);
  iVar1 = FUN_00301d0c(iVar1 + 0x960,FUN_00615520,0x10,0x32);
  *(undefined4 *)(iVar1 + 800) = 0;
  *(undefined4 *)(iVar1 + 0x324) = 0;
  iVar1 = FUN_00301d0c(iVar1 + 0x328,&UNK_002e9cf0,6,4);
  uVar2 = 0;
  do {
    FUN_00615508(iVar1 + -0xc90 + uVar2 * 0x10 + 0x968);
    uVar2 += 1;
  } while (uVar2 < 0x32);
  return iVar1 + -0xc90;
}
