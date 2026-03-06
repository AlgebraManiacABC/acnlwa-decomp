/**
 * FUN_00750ff0.c
 * Source line: 1107402
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00750ff0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x5f0) != 0) {
    uVar1 = ((uint)*(byte *)(*(int *)(param_1 + 0x5f0) + 0x1b) << 0x1c) >> 0x1e;
    if ((3 < uVar1) || (uVar1 == 0)) {
      return 0x1b;
    }
    if ((uVar1 != 1) && (uVar1 == 2)) {
      return 1;
    }
  }
  return 0;
}
