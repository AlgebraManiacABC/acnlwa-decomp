/**
 * _is_digit.c
 * Source line: 390309
 * Body lines: 4
 */
#include "../../../include/types.h"

undefined4 _is_digit(int param_1)

{
  if (param_1 - 0x30U < 10) {
    return 1;
  }
  return 0;
}
