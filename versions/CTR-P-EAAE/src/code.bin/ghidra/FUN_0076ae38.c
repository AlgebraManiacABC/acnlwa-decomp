/**
 * FUN_0076ae38.c
 * Source line: 1128447
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0076ae38(ushort *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 & 0xffff7fff;
  if (uVar1 != 0x3064) {
    if (uVar1 < 0x3064) {
      uVar1 -= 0x3057;
      if ((1 < uVar1) && (uVar1 != 3 && uVar1 != 4)) {
        return 0;
      }
    }
    else if ((uVar1 != 0x3065 && uVar1 != 0x3067) && uVar1 != 0x3068) {
      return 0;
    }
  }
  return 1;
}
