/**
 * FUN_00626318.c
 * Source line: 940051
 * Body lines: 9
 */
#include "../../../include/types.h"

bool FUN_00626318(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = DAT_0095362c;
  bVar2 = *(byte *)(DAT_0095362c + 0x1f0) < 2;
  if (bVar2) {
    *(undefined1 *)(DAT_0095362c + 0x1f0) = 2;
    *(undefined1 *)(iVar1 + 0x1f1) = 1;
  }
  return bVar2;
}
