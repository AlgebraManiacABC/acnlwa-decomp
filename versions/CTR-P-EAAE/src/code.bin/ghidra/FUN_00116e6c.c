/**
 * FUN_00116e6c.c
 * Source line: 115884
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00116e6c(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  param_1[2] = 0;
  param_1[1] = param_2;
  if (*param_1 < 1) {
    return;
  }
  do {
    if ((param_2 & 1) != 0) {
      param_1[2] = param_1[2] + 1;
    }
    param_2 >>= 1;
    iVar1 += 1;
  } while (iVar1 < *param_1);
  return;
}
