/**
 * FUN_004fee20.c
 * Source line: 745770
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_004fee20(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x10) != 5) {
    FUN_004ff300(param_1,0);
    FUN_004ff300(param_1,1);
    FUN_004ff300(param_1,2);
    FUN_004ff300(param_1,3);
    FUN_004ff300(param_1,4);
    if (param_2 == 0) {
      FUN_004feb7c(param_1,0,1);
    }
    else {
      FUN_004ff188(param_1,3);
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}
