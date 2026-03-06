/**
 * FUN_00344d8c.c
 * Source line: 441792
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00344d8c(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 != 0 && param_3 != 0) {
    uRam0095e5ac = 0;
    uRam0095e5b0 = 0;
    iRam0095e5a4 = param_2;
    iRam0095e5a8 = param_3;
    __rt_memclr_w(0xad9900,0x3000);
    return 1;
  }
  return 0;
}
