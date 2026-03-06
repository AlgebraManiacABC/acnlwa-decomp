/**
 * FUN_001d71c8.c
 * Source line: 239983
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_001d71c8(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    if (*(char *)(param_1 + 0x48) == '\0') {
      return;
    }
    uVar1 = 2;
  }
  else {
    FUN_00136e58();
    uVar1 = 5;
  }
  *(undefined1 *)(param_1 + 0x48) = uVar1;
  return;
}
