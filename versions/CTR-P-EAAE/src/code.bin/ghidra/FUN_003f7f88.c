/**
 * FUN_003f7f88.c
 * Source line: 565046
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_003f7f88(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00411e4c(*(undefined4 *)(param_1 + 0x55c));
  if (iVar1 < 0) {
    if (*(char *)(param_1 + 0x558) == '\0') {
      return 0;
    }
  }
  else {
    iVar1 = -0x1f5eb7d9;
  }
  return iVar1;
}
