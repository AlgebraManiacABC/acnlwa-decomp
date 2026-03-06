/**
 * FUN_0067837c.c
 * Source line: 982790
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0067837c(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x1a9) != -0x78) {
    iVar1 = FUN_00656c20(param_1);
    *(undefined1 *)(iVar1 + 0xe) = param_2;
    uVar2 = FUN_0064d0b8(param_1,0x88,iVar1,0);
    return uVar2;
  }
  return 1;
}
