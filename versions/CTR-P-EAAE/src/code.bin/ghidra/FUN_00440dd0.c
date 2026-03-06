/**
 * FUN_00440dd0.c
 * Source line: 606692
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00440dd0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00733638(iRam0097d428);
  if (iVar1 != 0) {
    FUN_00448cac(iRam0097d428,param_2);
    iVar1 = FUN_0044f0a0(uRam00974a6c,param_2);
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0x20) = 6;
      *(undefined1 *)(iVar1 + 0x14) = 0xfd;
    }
    if (*(short *)(iRam0097d428 + 0x5c) != 0) {
      *(short *)(iRam0097d428 + 0x5c) = *(short *)(iRam0097d428 + 0x5c) + -1;
    }
  }
  return;
}
