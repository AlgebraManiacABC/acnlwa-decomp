/**
 * FUN_005d79bc.c
 * Source line: 885811
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005d79bc(undefined4 *param_1,uint param_2)

{
  undefined *puVar1;
  
  if (param_2 < 7) {
    puVar1 = &UNK_00890e5c + param_2 * 0xc;
  }
  else {
    puVar1 = &UNK_00890eb0;
  }
  *param_1 = puVar1;
  return;
}
