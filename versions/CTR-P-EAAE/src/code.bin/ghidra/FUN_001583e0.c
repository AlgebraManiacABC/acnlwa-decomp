/**
 * FUN_001583e0.c
 * Source line: 171130
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_001583e0(uint param_1)

{
  if (param_1 <= (uint)(iRam0095e30c - iRam0095e310)) {
    uRam00ad6678 = 1;
    iRam00ad6674 = (iRam0095e308 + iRam0095e30c) - param_1;
    uRam00ad6670 = param_1;
    if (0x1c < param_1) {
      __rt_memmove(iRam00ad6674,iRam00ad6674 + 0x1c,param_1 - 0x1c);
    }
    return iRam00ad6674;
  }
  return 0;
}
