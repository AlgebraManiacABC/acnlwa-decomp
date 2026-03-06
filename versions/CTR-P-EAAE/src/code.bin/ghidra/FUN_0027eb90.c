/**
 * FUN_0027eb90.c
 * Source line: 326311
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0027eb90(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x3998);
  if ((*piVar2 == 0) && (iVar1 = FUN_0052ccfc(*(undefined4 *)(param_1 + 0x54)), iVar1 != 0)) {
    *piVar2 = *piVar2 + 1;
  }
  return;
}
