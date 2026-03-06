/**
 * FUN_007d99d0.c
 * Source line: 1182426
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_007d99d0(int param_1)

{
  code *pcVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    pcVar1 = *(code **)(*(int *)(param_1 + 8) + -8);
    if (pcVar1 == NULL) {
      FUN_002f83b0();
    }
    else {
      (*pcVar1)();
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}
