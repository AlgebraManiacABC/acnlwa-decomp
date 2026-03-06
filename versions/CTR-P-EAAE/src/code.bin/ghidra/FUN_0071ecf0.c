/**
 * FUN_0071ecf0.c
 * Source line: 1076336
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0071ecf0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3ca0);
  if (((int)param_2 < iVar1) || (iVar1 + 10U <= param_2)) {
    iVar1 = -1;
  }
  else {
    iVar1 = param_2 - iVar1;
  }
  FUN_007201d0(_DAT_00aaf14c + 0x6f10,
               iVar1 + (*(int *)(param_1 + *(int *)(param_1 + 0x185c) * 4 + 0x1860) + -1) * 10);
  return;
}
