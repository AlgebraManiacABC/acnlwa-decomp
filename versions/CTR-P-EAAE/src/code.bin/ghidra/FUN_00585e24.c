/**
 * FUN_00585e24.c
 * Source line: 832143
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00585e24(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0x16) {
    *(undefined1 *)(param_1 + 8) = 1;
          // WARNING: Subroutine does not return
    FUN_00584074();
  }
  iVar1 = FUN_00292d28();
  if (iVar1 == 0) {
          // WARNING: Subroutine does not return
    FUN_00584074(0);
  }
  return;
}
