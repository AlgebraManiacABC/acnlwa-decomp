/**
 * FUN_003212ec.c
 * Source line: 424324
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_003212ec(undefined4 param_1,int param_2)

{
  FUN_0032133c();
  if (*(int *)(param_2 + 0x50) != 0) {
    FUN_004ee9a8(param_1,param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_004ee9a8(param_1,param_2 + 0x10);
  return;
}
