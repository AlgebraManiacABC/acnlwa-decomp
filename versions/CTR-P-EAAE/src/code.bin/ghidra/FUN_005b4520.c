/**
 * FUN_005b4520.c
 * Source line: 864674
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_005b4520(void)

{
  uint uVar1;
  
  uVar1 = (uint)BYTE_00957322;
  if (((uVar1 == 0xa5) || ((~*(uint *)(&UNK_00889074 + uVar1 * 4) & 0x40000) != 0)) &&
     ((uVar1 == 0xa5 ||
      ((((~*(uint *)(&UNK_00889074 + uVar1 * 4) & 0x80000) != 0 || (DAT_0095c6d0 == 0)) ||
       (*(char *)(DAT_0095c6d0 + 0x10c) != '\x02')))))) {
    return 0;
  }
  return 1;
}
