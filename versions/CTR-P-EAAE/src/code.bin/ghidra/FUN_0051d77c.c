/**
 * FUN_0051d77c.c
 * Source line: 762248
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_0051d77c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = _DAT_00aaf14c;
  uVar3 = uRam00a8338c;
  if (((_DAT_00aaf14c != 0) &&
      (iVar2 = FUN_00309ef0(_DAT_00aaf14c + 0x8e08), uVar3 = uRam00a8338c, iVar2 != 0)) &&
     (*(byte *)(iVar1 + 0x8e11) < 3)) {
    uVar3 = (uint)*(byte *)(iVar1 + 0x8ebc);
  }
  return uVar3;
}
