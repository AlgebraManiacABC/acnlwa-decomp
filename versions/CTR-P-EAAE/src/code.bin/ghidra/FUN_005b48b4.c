/**
 * FUN_005b48b4.c
 * Source line: 864849
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_005b48b4(void)

{
  uint uVar1;
  
  uVar1 = (uint)BYTE_00957322;
  if ((((uVar1 == 0xa5) || ((~*(uint *)(&UNK_00889074 + uVar1 * 4) & 0x10) != 0)) && (uVar1 != 0xa5)
      ) && ((uVar1 = *(uint *)(&UNK_00889074 + uVar1 * 4), (~uVar1 & 4) == 0 &&
            ((((~uVar1 & 0x20) == 0 || ((~uVar1 & 0x40000) == 0)) || ((~uVar1 & 0x80000) == 0))))))
  {
    return 1;
  }
  return 0;
}
