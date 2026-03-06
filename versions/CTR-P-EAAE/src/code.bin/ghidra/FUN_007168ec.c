/**
 * FUN_007168ec.c
 * Source line: 1070673
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_007168ec(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  while ((*(byte *)(param_1 + uVar1) != param_2 && (*(byte *)(param_1 + uVar1 + 1) != param_2))) {
    uVar1 += 2;
    if (0x27 < uVar1) {
      return 0;
    }
  }
  return 1;
}
