/**
 * FUN_005c91a0.c
 * Source line: 877724
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_005c91a0(uint param_1)

{
  int iVar1;
  
  if (param_1 < 4) {
    iVar1 = (int)*(char *)(param_1 + 0xa82000);
    if (3 < iVar1) {
      iVar1 = -1;
    }
    iVar1 = (iVar1 >> 0x1f) + 1;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}
