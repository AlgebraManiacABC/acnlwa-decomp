/**
 * FUN_0075dc10.c
 * Source line: 1118218
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0075dc10(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (9 < (int)*(char *)(param_1 + uVar1) - 0x30U) {
      return 0;
    }
    uVar1 += 1;
  } while (uVar1 < 10);
  return 1;
}
