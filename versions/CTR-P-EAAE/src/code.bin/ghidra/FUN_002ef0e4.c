/**
 * FUN_002ef0e4.c
 * Source line: 385689
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002ef0e4(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x22d6) == '\x01') {
    FUN_00569508(param_1 + *(int *)(param_1 + 0x22ec) * 0x28 + 0x790);
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x2e4);
  }
  uVar1 = FUN_004b4fc0(param_1 + 0x2e4,*(undefined4 *)(*(int *)(param_1 + 0x22e8) * 4 + 0x94f7cc),1)
  ;
  FUN_00568630(param_1 + 0x2e4,param_1 + *(int *)(param_1 + 0x22e8) * 0x28 + 0x740,uVar1,0);
  FUN_005697e0(0,param_1 + *(int *)(param_1 + 0x22e8) * 0x28 + 0x740);
  return;
}
