/**
 * FUN_0074420c.c
 * Source line: 1100509
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0074420c(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 < 0x11) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_2 * 2 + -0x20;
  }
  if ((*(int *)(param_1 + 0x680) + iVar2 & 0xfffU) < 0xfe0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x20;
  }
  return uVar1;
}
