/**
 * FUN_00607360.c
 * Source line: 921822
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00607360(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0075cf7c(*(undefined4 *)(param_1 + 0x18));
  if (((iVar1 == 4) || (iVar1 = FUN_0075cf7c(*(undefined4 *)(param_1 + 0x18)), iVar1 == 9)) ||
     (iVar1 = FUN_0075cf7c(*(undefined4 *)(param_1 + 0x18)), iVar1 == 0xf)) {
    FUN_00603cf4(*(undefined4 *)(param_1 + 0x18),1);
    uRam009506d4 = 0x5a;
  }
  return;
}
