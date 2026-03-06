/**
 * FUN_0011cb18.c
 * Source line: 119895
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0011cb18(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_002f91d4(0,&UNK_04000027);
  iVar2 = FUN_00142104(0);
  *(int *)(iVar1 + 4) = iVar2 + 1;
  uVar3 = FUN_0011d7ec(0);
  *(undefined4 *)(iVar1 + 0xc) = uVar3;
  return;
}
