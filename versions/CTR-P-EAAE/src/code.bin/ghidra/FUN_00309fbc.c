/**
 * FUN_00309fbc.c
 * Source line: 408052
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00309fbc(int param_1,int param_2)

{
  if (param_2 != 0) {
    if (param_1 == param_2) {
      return 0;
    }
    if (param_1 + 0xa480 == param_2) {
      return 1;
    }
    if (param_1 + 0x14900 == param_2) {
      return 2;
    }
    if (param_1 + 0x1ed80 == param_2) {
      return 3;
    }
  }
  return 4;
}
