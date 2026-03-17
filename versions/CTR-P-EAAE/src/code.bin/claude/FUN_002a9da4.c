/**
 * FUN_002a9da4.c
 * Source line: 348250
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_002a9da4(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0xb0);
  }
  return iVar1 == param_2;
}
