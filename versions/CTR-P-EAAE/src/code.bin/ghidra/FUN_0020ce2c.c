/**
 * FUN_0020ce2c.c
 * Source line: 269025
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0020ce2c(undefined1 *param_1,uint param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  if (param_2 < 8) {
    iVar1 = param_2 * 3;
    *param_1 = *(undefined1 *)(iVar1 + 0xad55ea);
    param_1[1] = *(undefined1 *)(iVar1 + 0xad55eb);
    uVar2 = *(undefined1 *)(iVar1 + 0xad55ec);
  }
  else {
    *param_1 = uRam00ad55ea;
    param_1[1] = uRam00ad55eb;
    uVar2 = uRam00ad55ec;
  }
  param_1[2] = uVar2;
  return;
}
