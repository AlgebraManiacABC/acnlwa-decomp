/**
 * FUN_0072d8d8.c
 * Source line: 1084911
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0072d8d8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 2) == '\x01' || *(char *)(param_1 + 2) == '\x06') {
    uVar1 = *param_1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
