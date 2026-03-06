/**
 * FUN_00524d58.c
 * Source line: 767469
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00524d58(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 & 0xffff & ~*(uint *)(*(int *)(param_1 + 0x1c) + 0x188)) == 0) {
    if (*(int *)(param_1 + 0x24) < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = **(undefined4 **)(param_1 + 0x10);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}
