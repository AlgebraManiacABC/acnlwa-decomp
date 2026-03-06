/**
 * FUN_0074862c.c
 * Source line: 1104494
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined1 FUN_0074862c(int param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0xb);
  if (0xa9 < uVar2) {
    uVar2 = 0;
  }
  if (param_2 == 0) {
    uVar1 = (&UNK_008781a1)[uVar2 * 0xc];
  }
  else {
    uVar1 = (&UNK_008781a0)[uVar2 * 0xc];
  }
  return uVar1;
}
