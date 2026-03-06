/**
 * FUN_004cb1cc.c
 * Source line: 710520
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_004cb1cc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = param_1 + 0x1c4;
  FUN_00135748(iVar1);
  if (*(char *)(param_1 + 0x1f6) != '\0' && param_2 != 0) {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    *(int *)(param_1 + 0x1b8) = param_2;
    *(undefined4 *)(param_1 + 0x1bc) = param_3;
    FUN_001357ec(iVar1);
    return;
  }
  FUN_001357ec(iVar1);
  return;
}
