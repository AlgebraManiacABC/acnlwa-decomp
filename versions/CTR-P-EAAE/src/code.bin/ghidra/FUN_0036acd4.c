/**
 * FUN_0036acd4.c
 * Source line: 472920
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0036acd4(undefined2 param_1)

{
  int *piVar1;
  
  if (cRam0096b8f6 != '\0') {
    piVar1 = (int *)FUN_007d5870(uRam0096b950);
    if (*piVar1 != 0) {
      *(undefined2 *)(iRam00adce40 + *piVar1 * 2) = param_1;
      return;
    }
  }
  uRam00adce44 = param_1;
  return;
}
