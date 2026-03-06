/**
 * FUN_00422e4c.c
 * Source line: 587908
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_00422e4c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_004264d8();
  iVar2 = FUN_0053ac4c(0x2f0,uVar1);
  iVar3 = 0;
  if (iVar2 != 0) {
    *(undefined **)(iVar2 + 4) = &UNK_008ffeb0;
    iVar3 = FUN_00301d0c(iVar2 + 0x110,&UNK_00416358,0x28,0xc);
    iVar3 += -0x110;
  }
  return iVar3;
}
