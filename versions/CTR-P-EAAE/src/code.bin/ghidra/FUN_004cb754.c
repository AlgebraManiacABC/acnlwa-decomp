/**
 * FUN_004cb754.c
 * Source line: 710769
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_004cb754(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x130); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
    FUN_004d35e8(iVar1);
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  return;
}
