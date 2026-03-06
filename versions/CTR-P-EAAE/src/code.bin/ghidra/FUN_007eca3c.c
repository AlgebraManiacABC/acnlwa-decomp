/**
 * FUN_007eca3c.c
 * Source line: 1192328
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_007eca3c(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00577810(0x838);
  if (iVar1 != 0) {
    __rt_memclr_w(iVar1,0x838);
    puVar2 = (undefined4 *)FUN_0057742c(iVar1);
    puVar2[0x4b] = 0x7b1ddc;
    puVar2[0x2c] = 0x7b1cb4;
    puVar2[0x1a] = 0x7b1c9c;
    *puVar2 = OnUnresolved;
  }
  return;
}
