/**
 * FUN_005cda08.c
 * Source line: 880052
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_005cda08(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_0024ea1c(param_1 + uVar1 * 4 + 0xe8);
    uVar1 += 1;
  } while (uVar1 < 2);
  *(undefined1 *)(param_1 + 5) = 0;
  return 1;
}
