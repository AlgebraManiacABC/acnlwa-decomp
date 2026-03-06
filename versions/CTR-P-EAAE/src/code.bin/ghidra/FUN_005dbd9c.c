/**
 * FUN_005dbd9c.c
 * Source line: 887720
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_005dbd9c(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_007559a0(param_3);
  uVar1 = 1;
  if (((_DAT_00aaf14c != 0) && (*(char *)(_DAT_00aaf14c + 0x55d5) == '\x1d')) &&
     (*(char *)(_DAT_00aaf14c + 0x55d4) == '\x02')) {
    uVar1 = 0;
  }
  *param_2 = uVar1;
  return 1;
}
