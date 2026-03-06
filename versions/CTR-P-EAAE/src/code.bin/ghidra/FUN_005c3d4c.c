/**
 * FUN_005c3d4c.c
 * Source line: 873281
 * Body lines: 7
 */
#include "../../../include/types.h"

int FUN_005c3d4c(void)

{
  int iVar1;
  
  iVar1 = FUN_005c33d0();
  if (((iVar1 == 0) || (-1 < (int)((uint)*(byte *)(iVar1 + 0x66) << 0x1e))) ||
     ((int)((uint)*(byte *)(iVar1 + 0x66) << 0x1a) < 0)) {
    iVar1 = 0;
  }
  return iVar1;
}
