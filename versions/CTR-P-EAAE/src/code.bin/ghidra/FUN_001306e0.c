/**
 * FUN_001306e0.c
 * Source line: 137182
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001306e0(void)

{
  int iVar1;
  byte local_10 [4];
  byte local_c [4];
  
  if (((cRam0097d801 != '\0') && (iVar1 = FUN_001307c8(local_10), -1 < iVar1)) &&
     (iVar1 = FUN_00130750(local_c), -1 < iVar1)) {
    bRam0097d800 = local_10[0] | local_c[0];
    iVar1 = FUN_00136598(0);
    if (iVar1 == -0x36bfafff) {
      FUN_0013078c(0);
    }
  }
  return;
}
