/**
 * FUN_0062575c.c
 * Source line: 939214
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_0062575c(uint *param_1,undefined1 param_2,int param_3)

{
  *(undefined1 *)param_1 = param_2;
  *param_1 = *param_1 & 0xff | param_3 << 8;
  return;
}
