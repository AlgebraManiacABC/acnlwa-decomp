/**
 * FUN_0044f8d0.c
 * Source line: 615627
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0044f8d0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined1 *)(param_1 + 9) = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0a14821;
  }
  return uVar1;
}
