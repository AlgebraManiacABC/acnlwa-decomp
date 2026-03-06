/**
 * FUN_005c438c.c
 * Source line: 873704
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_005c438c(void)

{
  int iVar1;
  
  if (((-1 < (int)((uint)DAT_00aadad4 << 0x1c)) && (iVar1 = FUN_005c5eb8(4), iVar1 == 0)) &&
     (iVar1 = FUN_0052c1fc(), iVar1 == 0)) {
    iVar1 = FUN_005c33d0(4,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_00763818();
    if ((iVar1 != 0) && ((int)((uint)*(byte *)(iVar1 + 8) * 0x20000000) < 0)) {
      return 1;
    }
  }
  return 0;
}
