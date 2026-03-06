/**
 * FUN_003170f8.c
 * Source line: 418269
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_003170f8(uint param_1,int param_2)

{
  uint uVar1;
  
  if ((DAT_009516ac != 0) &&
     ((uVar1 = 0, param_2 == 0 ||
      ((*(char *)(DAT_009516ac + 0x18) == '\x03' &&
       (uVar1 = (uint)*(byte *)(DAT_009516ac + 0x1a), uVar1 != 2)))))) {
    if (param_1 != 0xe) {
      uVar1 = (uint)*(byte *)(DAT_009516ac + 0x19);
    }
    if (param_1 == 0xe || uVar1 == param_1) {
      return 1;
    }
  }
  return 0;
}
