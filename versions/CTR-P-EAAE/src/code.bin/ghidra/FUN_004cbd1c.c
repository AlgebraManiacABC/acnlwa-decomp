/**
 * FUN_004cbd1c.c
 * Source line: 711114
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_004cbd1c(int param_1)

{
  int iVar1;
  
  FUN_004cb870();
  for (iVar1 = *(int *)(param_1 + 0x130); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
    if (*(char *)(iVar1 + 0x139) != '\0') {
      FUN_004d3e8c(iVar1);
    }
  }
  for (iVar1 = *(int *)(param_1 + 0x130); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
    FUN_004d35e8(iVar1);
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}
