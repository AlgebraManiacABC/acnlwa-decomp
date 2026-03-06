/**
 * FUN_00626100.c
 * Source line: 939888
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_00626100(uint *param_1,undefined1 param_2,int param_3)

{
  *(undefined1 *)param_1 = param_2;
  *param_1 = *param_1 & 0xff | param_3 << 8;
  return;
}
