/**
 * FUN_00624c78.c
 * Source line: 938419
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_00624c78(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 4) {
    uVar1 = 1 << (param_1 & 0xff) & 0xff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
