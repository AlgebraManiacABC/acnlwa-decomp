/**
 * FUN_0071f798.c
 * Source line: 1076869
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0071f798(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002d0920(*param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (param_2 != NULL) {
      *param_2 = *(undefined4 *)(iVar1 + 0x644);
      param_2[1] = *(undefined4 *)(iVar1 + 0x648);
      param_2[2] = *(undefined4 *)(iVar1 + 0x64c);
    }
    uVar2 = 1;
  }
  return uVar2;
}
