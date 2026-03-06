/**
 * FUN_001d55b0.c
 * Source line: 238759
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_001d55b0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00749ba4(param_2 + 0x10);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    FUN_004c5110(param_1,*(int *)(param_2 + 0x10),param_3);
    return;
  }
  return;
}
