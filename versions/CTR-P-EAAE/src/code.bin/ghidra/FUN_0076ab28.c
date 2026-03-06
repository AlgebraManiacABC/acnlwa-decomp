/**
 * FUN_0076ab28.c
 * Source line: 1128205
 * Body lines: 13
 */
#include "../../../include/types.h"

byte FUN_0076ab28(void)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_00535a68();
  bVar1 = 0;
  if (iVar2 != 0) {
    if (*(byte *)(iVar2 + 0xd) >> 4 < 8) {
      bVar1 = *(byte *)(iVar2 + 0xd) >> 4;
    }
    else {
      bVar1 = 0;
    }
  }
  return bVar1;
}
