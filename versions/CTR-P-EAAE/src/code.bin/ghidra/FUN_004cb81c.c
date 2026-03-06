/**
 * FUN_004cb81c.c
 * Source line: 710815
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004cb81c(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_004cb870();
  for (iVar1 = *(int *)(param_1 + 0x130); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
    if (*(char *)(iVar1 + 0x139) != '\0') {
      if (-1 < (int)param_2) {
        FUN_004c52a0(iVar1 + 0x98,param_2 & 0xff);
      }
      FUN_004d3e8c(iVar1);
    }
  }
  return;
}
