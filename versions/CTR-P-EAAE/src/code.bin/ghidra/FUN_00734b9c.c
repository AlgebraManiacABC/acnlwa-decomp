/**
 * FUN_00734b9c.c
 * Source line: 1090364
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00734b9c(int param_1,uint param_2,uint param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0xe0e14826;
  uVar2 = *(uint *)(iRam00974a74 + 0x30);
  if ((param_2 < uVar2 && param_3 < uVar2) && (param_4 + -0x100000 < (undefined1 *)0x3ff00000)) {
    *param_4 = *(undefined1 *)(param_3 + param_2 * uVar2 + *(int *)(param_1 + 0x38));
    uVar1 = 0;
  }
  return uVar1;
}
