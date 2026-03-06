/**
 * FUN_003d61ac.c
 * Source line: 547395
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_003d61ac(undefined4 param_1,int param_2)

{
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_2 + 0x10);
  FUN_003d5e2c(param_1,&local_10,0x20);
  if (*(int *)(param_2 + 0x10) != 0) {
    FUN_003d5e2c(param_1,*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18),
                 *(int *)(param_2 + 0x10) << 3);
  }
  return param_1;
}
