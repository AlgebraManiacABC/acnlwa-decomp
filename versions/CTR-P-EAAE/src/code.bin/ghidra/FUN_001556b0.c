/**
 * FUN_001556b0.c
 * Source line: 169085
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_001556b0(void)

{
  uint uVar1;
  
  if (cRam0097518f == '\0') {
    uVar1 = FUN_00123590(&UNK_008a2c6c,0xf000000b);
    if ((uVar1 & 0x80000000) != 0) {
      if ((int)uVar1 < 0) {
        FUN_0012f598(uVar1,0x1556f4);
      }
      return 0xb;
    }
    cRam0097518f = '\x01';
  }
  return 0;
}
