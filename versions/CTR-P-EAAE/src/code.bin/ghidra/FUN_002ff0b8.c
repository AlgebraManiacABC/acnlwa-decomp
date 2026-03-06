/**
 * FUN_002ff0b8.c
 * Source line: 397166
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_002ff0b8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0076a36c(param_1,param_1);
  uVar1 = 0;
  if ((int)uVar2 != 0) {
    if ((*(ushort *)((int)((ulonglong)uVar2 >> 0x20) + 2) & 7) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
