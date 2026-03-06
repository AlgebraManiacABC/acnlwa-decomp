/**
 * FUN_00665380.c
 * Source line: 972995
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00665380(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x1a9) != ';') {
    iVar1 = FUN_00656c20(param_1);
    *(undefined1 *)(iVar1 + 0xe) = param_3;
    *(undefined1 *)(iVar1 + 0xf) = param_4;
    *(undefined1 *)(iVar1 + 0x10) = param_2;
    uVar2 = FUN_0064d0b8(param_1,0x3b,iVar1,0);
    return uVar2;
  }
  return 1;
}
