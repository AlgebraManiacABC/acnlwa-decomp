/**
 * FUN_006b1f7c.c
 * Source line: 1010337
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_006b1f7c(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0xc5c) != '\0') {
    if (param_2 == 0) {
      FUN_00279d6c(0x3f800000,param_1 + 0x134,5,0);
      FUN_00279d6c(0x3f800000,param_1 + 0x134,4,0);
    }
    else {
      FUN_00279d6c(0,param_1 + 0x134,5,0);
      FUN_00279d6c(0,param_1 + 0x134,4,0);
    }
    *(bool *)(param_1 + 0xcfe) = param_2 != 0;
  }
  return;
}
