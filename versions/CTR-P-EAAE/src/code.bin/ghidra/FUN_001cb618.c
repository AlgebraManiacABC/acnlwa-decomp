/**
 * FUN_001cb618.c
 * Source line: 233190
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_001cb618(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x150);
  FUN_00568630(param_1 + 4,piVar1,*(undefined4 *)(param_1 + 0x1a4),0);
  (**(code **)(*piVar1 + 8))(0,piVar1);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 4);
}
