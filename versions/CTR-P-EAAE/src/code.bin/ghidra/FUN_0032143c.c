/**
 * FUN_0032143c.c
 * Source line: 424399
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0032143c(undefined4 param_1,int param_2)

{
  FUN_003214a0();
  if (*(int *)(param_2 + 0x50) != 0) {
    FUN_004ee9a8(param_1,param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    FUN_004ee9a8(param_1,param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_004ee9a8(param_1,param_2 + 0x10);
  return;
}
