/**
 * FUN_0027643c.c
 * Source line: 321313
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0027643c(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 < 0x40) && (iVar1 = param_1 + param_2 * 4, *(int *)(iVar1 + 0x14) != 0)) {
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + -1;
  }
  return;
}
