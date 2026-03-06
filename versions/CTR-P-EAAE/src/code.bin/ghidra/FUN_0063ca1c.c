/**
 * FUN_0063ca1c.c
 * Source line: 953560
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0063ca1c(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (0xf < param_2) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x275) = 4;
  if (*(int *)(param_1 + 0xf0) == 0) {
    uVar1 = FUN_002fb94c();
    return uVar1;
  }
  uVar1 = FUN_002fb94c();
  return uVar1;
}
