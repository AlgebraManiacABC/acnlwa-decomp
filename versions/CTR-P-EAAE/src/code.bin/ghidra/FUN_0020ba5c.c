/**
 * FUN_0020ba5c.c
 * Source line: 268118
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_0020ba5c(void)

{
  int iVar1;
  undefined1 auStack_20 [16];
  
  iVar1 = FUN_00613e24();
  *(undefined4 *)(iVar1 + 0x1408) = 0;
  *(undefined4 *)(iVar1 + 0x140c) = 0;
  iVar1 = FUN_006efd24(iVar1 + 0x1410);
  FUN_0056bb88(auStack_20);
  *(char *)(iVar1 + 0x56) = (char)auStack_20._4_4_;
  FUN_0056bb88(auStack_20);
  *(char *)(iVar1 + 0x57) = SUB41(auStack_20._4_4_,1);
  *(undefined2 *)(iVar1 + 0x58) = 0;
  *(undefined1 *)(iVar1 + 0x5a) = 0;
  *(undefined1 *)(iVar1 + 0x5b) = 0;
  FUN_0020b9b0(iVar1 + -0x1410);
  return iVar1 + -0x1410;
}
