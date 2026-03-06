/**
 * FUN_002cc1b0.c
 * Source line: 367051
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002cc1b0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3520);
  if (((int)param_2 < iVar1) || (iVar1 + 10U <= param_2)) {
    iVar1 = -1;
  }
  else {
    iVar1 = param_2 - iVar1;
  }
  FUN_002e3568(param_1 + iVar1 * 0x2b4 + 0x18d4);
  return;
}
