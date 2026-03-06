/**
 * FUN_002fd41c.c
 * Source line: 395704
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_002fd41c(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  if (param_1 == param_4) {
    if ((char)param_2 == (char)param_5) {
      if ((param_5 << 0x10) >> 0x18 <= (param_2 << 0x10) >> 0x18) {
        return 1;
      }
    }
    else if ((char)param_5 <= (char)param_2) {
      return 1;
    }
  }
  else if (param_4 <= param_1) {
    return 1;
  }
  return 0;
}
