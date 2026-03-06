/**
 * FUN_00412cb8.c
 * Source line: 579230
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined1 FUN_00412cb8(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x20) + 0x10);
  }
  return uVar1;
}
