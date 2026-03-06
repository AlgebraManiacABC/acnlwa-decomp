/**
 * FUN_005c7d64.c
 * Source line: 876718
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_005c7d64(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005c33d0(4,0);
  if (((iVar1 != 0) && (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))) &&
     (*(char *)(iVar1 + 0x1a9) == -0x5c)) {
    uVar2 = FUN_006739b8(iVar1,0x12,1,0xc,5,1,0,2,0);
    return uVar2;
  }
  return 0;
}
