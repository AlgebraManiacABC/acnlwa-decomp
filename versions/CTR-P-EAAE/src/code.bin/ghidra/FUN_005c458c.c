/**
 * FUN_005c458c.c
 * Source line: 873831
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_005c458c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_005c33d0(param_1,1);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 0x1a9) != -0x43)) {
    iVar1 = FUN_005c33d0(param_1,1);
    if (iVar1 == 0) {
      return 0;
    }
    if (*(char *)(iVar1 + 0x1a9) != '\x10') {
      return 0;
    }
    if (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x19)) {
      return 0;
    }
  }
  return 1;
}
