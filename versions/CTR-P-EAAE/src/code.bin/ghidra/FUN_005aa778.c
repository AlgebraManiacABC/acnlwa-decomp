/**
 * FUN_005aa778.c
 * Source line: 857119
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005aa778(int param_1,int param_2)

{
  undefined1 uVar1;
  
  __rt_memclr_w(param_1,0x6c);
  FUN_005a8b14(param_1);
  *(undefined1 *)(param_1 + 0xd) = 4;
  if (param_2 == 1 || param_2 == 2) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    uVar1 = 9;
  }
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  return;
}
