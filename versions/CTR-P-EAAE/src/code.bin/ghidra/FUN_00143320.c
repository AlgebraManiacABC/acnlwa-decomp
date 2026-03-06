/**
 * FUN_00143320.c
 * Source line: 155689
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00143320(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xaf51c0;
  iVar1 = FUN_001432c8(0xaf51c0,param_1);
  if (iVar1 != 0) {
    iVar2 = iVar1 + 0x18;
  }
  FUN_001408d4(iVar2,param_1 + 4);
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}
