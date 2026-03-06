/**
 * FUN_001c2cfc.c
 * Source line: 229469
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_001c2cfc(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x14))();
  if ((iVar1 != 0) && (iVar1 = FUN_00718c6c(param_1 + 0x50), iVar1 == 0)) {
    *(undefined1 *)(param_1 + 0x972c) = 0;
    FUN_005210a8(param_1);
    FUN_00816a0c(param_1 + 0x28,&UNK_001c2dd8,0);
  }
  return;
}
