/**
 * FUN_005c2c38.c
 * Source line: 872317
 * Body lines: 11
 */
#include "../../../include/types.h"

bool FUN_005c2c38(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_005c33d0(4,0);
  if (iVar1 != 0) {
    bVar2 = (int)((uint)*(byte *)(iVar1 + 0x171) << 0x1a) < 0;
    if (bVar2) {
      *(byte *)(iVar1 + 0x174) = *(byte *)(iVar1 + 0x174) | 0x80;
    }
    return bVar2;
  }
  return false;
}
