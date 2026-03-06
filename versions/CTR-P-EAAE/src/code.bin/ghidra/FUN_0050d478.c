/**
 * FUN_0050d478.c
 * Source line: 751773
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0050d478(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xb8) != 0) {
    FUN_0013138c();
    iVar1 = FUN_00747438(*(undefined4 *)(param_1 + 0xb8),0);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0xb8) != 0) {
        FUN_005197dc();
        FUN_002ffb64();
      }
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
  }
  return;
}
