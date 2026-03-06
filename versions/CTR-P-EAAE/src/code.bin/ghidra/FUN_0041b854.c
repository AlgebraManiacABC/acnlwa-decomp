/**
 * FUN_0041b854.c
 * Source line: 584687
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0041b854(void)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined1 *)(*(int *)(iRam00974a58 + 0x18) + 0x10) = 0;
  uVar2 = 0;
  *(undefined1 *)(*(int *)(iRam00974a58 + 0x18) + 0x11) = 4;
  do {
    uVar1 = FUN_007302fc(*(undefined4 *)(iRam00974a58 + 0x14),0);
    if ((uVar1 & 1 << (uVar2 & 0xff)) == 0) {
      FUN_0041c788(*(undefined4 *)(iRam00974a58 + 0x18),uVar2 + 1 & 0xff);
    }
    uVar2 += 1;
  } while (uVar2 < 0xc);
  return;
}
