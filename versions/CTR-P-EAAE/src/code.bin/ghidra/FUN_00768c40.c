/**
 * FUN_00768c40.c
 * Source line: 1126475
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00768c40(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = *param_1 & 0x7fff;
  if (uVar1 != 0xbd) {
    if (uVar1 < 0xbe) {
      if ((uVar1 != 0xa0 && uVar1 != 0xa6) && (uVar1 != 0xac && uVar1 != 0xb3)) {
        return 0;
      }
    }
    else if ((uVar1 != 0xbe && uVar1 != 0xc6) && uVar1 != 200) {
      return 0;
    }
  }
  return 1;
}
