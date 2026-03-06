/**
 * FUN_007b0d10.c
 * Source line: 1153798
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_007b0d10(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = _DAT_00974a7c;
  uVar2 = (int)_DAT_00974a7c - *(int *)(iRam00adf95c + 4);
  *(uint *)(iRam00adf95c + 0xc) = uVar2;
  if (((uVar2 & 8) != 0) && (puVar1 < puRam00974a80)) {
    _DAT_00974a7c = puVar1 + 2;
    puVar1[1] = 0x8025e;
    *puVar1 = 0;
  }
  uRam00adf8d3 = 1;
  iRam00adfa28 = (int)_DAT_00974a7c - *(int *)(iRam00adf95c + 4);
  uRam00adfa2c = *(undefined4 *)(iRam00adf95c + 0x20);
  return;
}
