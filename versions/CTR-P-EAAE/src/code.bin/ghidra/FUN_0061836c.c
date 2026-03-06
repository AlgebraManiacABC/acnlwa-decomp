/**
 * FUN_0061836c.c
 * Source line: 929982
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_0061836c(uint *param_1,uint param_2,int param_3)

{
  if (param_1 != NULL) {
    *param_1 = param_2 & 0xffff | param_3 << 0x10;
  }
  return;
}
