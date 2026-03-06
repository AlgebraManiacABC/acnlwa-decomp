/**
 * FUN_004d0f90.c
 * Source line: 715136
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_004d0f90(undefined4 param_1,uint param_2,int param_3)

{
  if (1 < param_2) {
    if (param_2 == 2 || param_2 == 3) {
      *(undefined4 *)(param_3 + 4) = 0;
    }
    return;
  }
  FUN_004ca6e8();
  *(undefined4 *)(param_3 + 4) = 0;
  return;
}
