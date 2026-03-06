/**
 * FUN_007703ac.c
 * Source line: 1133209
 * Body lines: 6
 */
#include "../../../include/types.h"

int FUN_007703ac(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8ac4);
  if ((iVar1 == 1) && ((int)((uint)*(byte *)(param_1 + 0x5700) << 0x1b) < 0)) {
    iVar1 = 0;
  }
  return iVar1;
}
