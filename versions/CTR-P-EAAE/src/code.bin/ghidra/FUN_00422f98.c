/**
 * FUN_00422f98.c
 * Source line: 587972
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00422f98(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = FUN_004264d8();
  iVar2 = FUN_0053ac4c(1000,uVar1);
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_00425784();
    *puVar3 = &UNK_0090040c;
    puVar3[0x16] = &UNK_008ffeb0;
    return;
  }
  return;
}
