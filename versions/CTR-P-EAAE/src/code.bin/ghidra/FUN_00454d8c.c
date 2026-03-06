/**
 * FUN_00454d8c.c
 * Source line: 619342
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00454d8c(int param_1,uint param_2,uint param_3,undefined1 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(iRam00974a74 + 0x30);
  if (param_2 < uVar2 && param_3 < uVar2) {
    *(undefined1 *)(param_3 + param_2 * uVar2 + *(int *)(param_1 + 8)) = param_4;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0e14826;
  }
  return uVar1;
}
