/**
 * FUN_003446c4.c
 * Source line: 441478
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_003446c4(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 != 0 && param_3 != 0) {
    uRam0095e310 = 0;
    uRam0095e314 = 0;
    iRam0095e308 = param_2;
    iRam0095e30c = param_3;
    __rt_memclr_w(0xad6670,0x3000);
  }
  return param_2 != 0 && param_3 != 0;
}
