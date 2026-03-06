/**
 * FUN_003504fc.c
 * Source line: 452067
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_003504fc(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0xffffffff;
  iVar1 = FUN_00123f94(&local_8,4,0xb0000);
  if (iVar1 < 0) {
    FUN_0012f598(iVar1,0x350524);
  }
  return local_8 >> 0x18;
}
