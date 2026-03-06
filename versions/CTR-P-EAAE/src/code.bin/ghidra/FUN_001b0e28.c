/**
 * FUN_001b0e28.c
 * Source line: 218609
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_001b0e28(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074baa4(param_1 + 0x14,0);
  if (0 < iVar1) {
    FUN_00548840(param_1 + 0x14,0);
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN_0013b6e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    FUN_001b0544(0,param_1 + 0x278,0);
    FUN_001b09d8(*(undefined4 *)(param_1 + 0x27c),param_1,*(undefined4 *)(param_1 + 0x26c));
  }
  if (*(int **)(param_1 + 0xc) != NULL) {
    (**(code **)(**(int **)(param_1 + 0xc) + 4))();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}
