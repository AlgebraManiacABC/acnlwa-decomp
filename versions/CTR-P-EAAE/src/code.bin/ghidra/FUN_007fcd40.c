/**
 * FUN_007fcd40.c
 * Source line: 1200594
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_007fcd40(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    do {
      FUN_007fcd40(param_1,*(undefined4 *)(param_2 + 0xc));
      iVar1 = *(int *)(param_2 + 8);
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
      FUN_00361988(*(undefined4 *)(param_2 + 0x18));
      FUN_003d0d6c(param_2 + 0x10);
      *(int *)(param_1 + 4) = param_2;
      param_2 = iVar1;
    } while (iVar1 != 0);
    return;
  }
  return;
}
