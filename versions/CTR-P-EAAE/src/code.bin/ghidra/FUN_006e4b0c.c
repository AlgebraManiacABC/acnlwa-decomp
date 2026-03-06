/**
 * FUN_006e4b0c.c
 * Source line: 1042434
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined * FUN_006e4b0c(uint param_1)

{
  undefined *puVar1;
  
  if (param_1 < 5) {
    puVar1 = &DAT_009b3b08 + param_1 * 0xec;
  }
  else {
    puVar1 = &DAT_009b3b08;
  }
  return puVar1;
}
