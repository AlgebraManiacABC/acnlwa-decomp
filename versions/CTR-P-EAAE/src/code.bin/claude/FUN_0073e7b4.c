/**
 * FUN_0073e7b4.c
 * Source line: 1097032
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0073e7b4(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x9c) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x218);
  }
  return uVar1;
}
