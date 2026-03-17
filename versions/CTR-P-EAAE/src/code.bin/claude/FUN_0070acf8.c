/**
 * FUN_0070acf8.c
 * Source line: 1062584
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined1 FUN_0070acf8(int param_1,uint param_2)

{
  undefined1 uVar1;
  
  if (param_2 < 4) {
    uVar1 = *(undefined1 *)(param_1 + param_2 * 0x18 + 0xe4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
