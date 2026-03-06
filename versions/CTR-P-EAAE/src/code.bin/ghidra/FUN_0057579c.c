/**
 * FUN_0057579c.c
 * Source line: 819572
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_0057579c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(int *)(param_1 + 4) = iVar1 + -1;
  }
  return iVar1 == 0;
}
