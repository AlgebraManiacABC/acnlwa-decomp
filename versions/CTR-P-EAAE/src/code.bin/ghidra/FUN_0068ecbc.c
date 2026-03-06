/**
 * FUN_0068ecbc.c
 * Source line: 994433
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0068ecbc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_00950874;
  if (DAT_00950874 == 0) {
    return;
  }
  *(undefined1 *)(DAT_00950874 + 0xf3) = 5;
  *(undefined1 *)(iVar1 + 0x136) = 0;
  if ((*(byte *)(iVar1 + 0x1b2) & 1) == 0) {
    uVar2 = FUN_00584134();
    FUN_0058c514(uVar2,0x2b);
    *(byte *)(iVar1 + 0x1b2) = *(byte *)(iVar1 + 0x1b2) | 1;
  }
  return;
}
