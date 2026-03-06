/**
 * FUN_0020cde4.c
 * Source line: 269002
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0020cde4(undefined1 *param_1,uint param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  if (param_2 < 0x10) {
    iVar1 = param_2 * 3;
    *param_1 = *(undefined1 *)(iVar1 + 0xad5602);
    param_1[1] = *(undefined1 *)(iVar1 + 0xad5603);
    uVar2 = *(undefined1 *)(iVar1 + 0xad5604);
  }
  else {
    *param_1 = uRam00ad5602;
    param_1[1] = uRam00ad5603;
    uVar2 = uRam00ad5604;
  }
  param_1[2] = uVar2;
  return;
}
