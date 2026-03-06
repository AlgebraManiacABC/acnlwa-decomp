/**
 * FUN_005c886c.c
 * Source line: 877319
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_005c886c(void)

{
  bool bVar1;
  
  bVar1 = -1 < (int)((uint)DAT_00aadad4 << 0x19);
  if (bVar1) {
    DAT_00aadad4 |= 0x40;
  }
  return bVar1;
}
