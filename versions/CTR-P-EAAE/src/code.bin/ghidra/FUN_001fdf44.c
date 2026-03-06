/**
 * FUN_001fdf44.c
 * Source line: 260193
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_001fdf44(void)

{
  undefined4 uVar1;
  
  if (iRam00950128 == 0) {
    uVar1 = 1;
  }
  else {
    if (iRam0095012c == 0) {
      FUN_005204b0(iRam00950128);
      iRam0095012c += 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}
