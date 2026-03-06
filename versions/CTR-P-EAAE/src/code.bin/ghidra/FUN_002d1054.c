/**
 * FUN_002d1054.c
 * Source line: 370033
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_002d1054(undefined4 param_1,int param_2)

{
  FUN_002d10a4();
  if (*(int *)(param_2 + 0x38) != 0) {
    FUN_004ee9a8(param_1,param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_004ee9a8(param_1,param_2 + 0x10);
  return;
}
