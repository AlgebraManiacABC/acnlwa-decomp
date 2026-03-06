/**
 * FUN_001ae5dc.c
 * Source line: 217096
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_001ae5dc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_4 == 0) {
    FUN_00312c4c(param_2,*(undefined2 *)(iVar1 + 0x1a6),4,4,4);
    return;
  }
  if (param_4 != 1) {
    if (param_4 == 2) {
      FUN_00312c4c(param_2,*(undefined1 *)(iVar1 + 0x1a9),2,6,4);
    }
    return;
  }
  FUN_00312c4c(param_2,*(undefined1 *)(iVar1 + 0x1a8),2,6,4);
  return;
}
