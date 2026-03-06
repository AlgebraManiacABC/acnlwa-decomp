/**
 * FUN_0044fa0c.c
 * Source line: 615734
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0044fa0c(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar1 = 0xe0a1482b;
  }
  else if (*(char *)(param_1 + 9) == '\0') {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 9) = 1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0a14827;
  }
  return uVar1;
}
