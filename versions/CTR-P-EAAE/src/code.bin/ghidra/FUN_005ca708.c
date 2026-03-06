/**
 * FUN_005ca708.c
 * Source line: 878689
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_005ca708(void)

{
  if (iRam0095bf78 == 0) {
    iRam0095bf78 = (**(code **)(*DAT_00952c3c + 0x18))(DAT_00952c3c,0x89b00,0x80);
    if (iRam0095bf78 != 0) {
      __rt_memcpy_w(iRam0095bf78,DAT_0095bf74,0x89b00);
      return;
    }
  }
  return;
}
