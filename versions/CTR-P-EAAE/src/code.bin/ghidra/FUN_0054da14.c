/**
 * FUN_0054da14.c
 * Source line: 792756
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0054da14(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < (int)param_1[2]) {
    do {
      if (*(int *)(param_1[iVar1 + 4] + 0x14) == param_1[3]) {
        FUN_0054ec04(*param_1);
      }
      iVar1 += 1;
    } while (iVar1 < (int)param_1[2]);
  }
  return;
}
