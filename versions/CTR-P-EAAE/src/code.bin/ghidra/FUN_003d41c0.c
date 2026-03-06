/**
 * FUN_003d41c0.c
 * Source line: 545730
 * Body lines: 11
 */
#include "../../../include/types.h"

int * FUN_003d41c0(int *param_1)

{
  code *pcVar1;
  
  if (*param_1 != 0) {
    pcVar1 = *(code **)(*param_1 + -8);
    if (pcVar1 == NULL) {
      FUN_002f83b0();
    }
    else {
      (*pcVar1)();
    }
  }
  return param_1;
}
