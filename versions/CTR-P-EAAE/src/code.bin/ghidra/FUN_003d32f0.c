/**
 * FUN_003d32f0.c
 * Source line: 544749
 * Body lines: 11
 */
#include "../../../include/types.h"

int * FUN_003d32f0(int *param_1)

{
  code *pcVar1;
  
  if (((char)param_1[2] == '\x04') && (*param_1 != 4)) {
    pcVar1 = *(code **)(*param_1 + -0xc);
    if (pcVar1 == NULL) {
      FUN_002f83b0();
    }
    else {
      (*pcVar1)();
    }
  }
  return param_1;
}
