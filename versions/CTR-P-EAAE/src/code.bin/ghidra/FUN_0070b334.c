/**
 * FUN_0070b334.c
 * Source line: 1063003
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0070b334(uint param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 2) == '\x02' || *(char *)(param_1 + 2) == '\x01') {
    uVar1 = *(uint *)(param_1 + 4);
    if (uVar1 != 0) {
      param_1 = *(uint *)(param_1 + 8);
    }
    if ((uVar1 != 0 && param_1 != 0) && (uVar1 <= param_1)) {
      return 1;
    }
  }
  return 0;
}
