/**
 * FUN_0074076c.c
 * Source line: 1098904
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0074076c(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    if (*(char *)(*param_1 + 4) == '\0') {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
