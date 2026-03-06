/**
 * FUN_00713ad0.c
 * Source line: 1068803
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00713ad0(int param_1)

{
  undefined4 uVar1;
  
  if ((((*(int *)(param_1 + 4) == 0) || (*(char *)(param_1 + 0xc) != '\x01')) &&
      (3 < *(byte *)(param_1 + 0xe))) && (*(char *)(param_1 + 0xd) == '\x04')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
