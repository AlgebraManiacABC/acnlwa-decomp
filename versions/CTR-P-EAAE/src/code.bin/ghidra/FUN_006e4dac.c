/**
 * FUN_006e4dac.c
 * Source line: 1042815
 * Body lines: 4
 */
#include "../../../include/types.h"

bool FUN_006e4dac(int param_1,int param_2)

{
  if (param_1 != 0xae) {
    param_2 = param_1 + -0x100;
  }
  return param_1 == 0xae || param_2 == 0x26;
}
