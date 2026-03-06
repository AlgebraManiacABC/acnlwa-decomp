/**
 * FUN_004cd844.c
 * Source line: 712593
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004cd844(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0xf) = 1;
  if (*(char *)(param_1 + 0xa2) != '\0') {
    uVar1 = FUN_004cad5c();
    FUN_001408c8(uVar1,param_1 + 0x50);
    *(undefined1 *)(param_1 + 0xa2) = 0;
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  return;
}
