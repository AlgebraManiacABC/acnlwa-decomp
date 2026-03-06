/**
 * FUN_0020cd9c.c
 * Source line: 268979
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0020cd9c(undefined1 *param_1,uint param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  if (param_2 < 6) {
    iVar1 = param_2 * 3;
    *param_1 = *(undefined1 *)(iVar1 + 0xad55d8);
    param_1[1] = *(undefined1 *)(iVar1 + 0xad55d9);
    uVar2 = *(undefined1 *)(iVar1 + 0xad55da);
  }
  else {
    *param_1 = uRam00ad55d8;
    param_1[1] = uRam00ad55d9;
    uVar2 = uRam00ad55da;
  }
  param_1[2] = uVar2;
  return;
}
