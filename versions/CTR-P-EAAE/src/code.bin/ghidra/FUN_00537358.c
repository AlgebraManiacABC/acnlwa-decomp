/**
 * FUN_00537358.c
 * Source line: 778608
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00537358(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0071fcb8();
  uVar1 = (uint)((ulonglong)uVar2 >> 0x20);
  if ((int)uVar2 != 0) {
    *(undefined1 *)(param_1 + 0x7dd7) = 4;
    if (DAT_00952620 != 0) {
      uVar1 = (uint)*(byte *)(DAT_00952620 + 0xa1);
    }
    if (DAT_00952620 != 0 && uVar1 != 0) {
      FUN_002e0d04();
      return;
    }
  }
  return;
}
