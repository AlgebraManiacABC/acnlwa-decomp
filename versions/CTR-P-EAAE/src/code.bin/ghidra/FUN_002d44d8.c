/**
 * FUN_002d44d8.c
 * Source line: 372711
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_002d44d8(int param_1,uint param_2)

{
  int iVar1;
  
  if (6 < param_2) {
    param_2 = 0;
  }
  iVar1 = FUN_002ff8b0(4);
  if (iVar1 < 4) {
    *(char *)(iVar1 + param_1 + 4) = (char)param_2;
  }
  return;
}
