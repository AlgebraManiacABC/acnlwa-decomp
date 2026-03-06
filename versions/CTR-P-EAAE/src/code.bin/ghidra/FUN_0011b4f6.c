/**
 * FUN_0011b4f6.c
 * Source line: 117971
 * Body lines: 4
 */
#include "../../../include/types.h"

undefined4 FUN_0011b4f6(uint *param_1,uint param_2)

{
  if ((param_2 < *param_1) && ((param_1[1] & 1 << (param_2 & 0xff)) != 0)) {
    return 1;
  }
  return 0;
}
