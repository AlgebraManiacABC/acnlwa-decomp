/**
 * FUN_00422fc0.c
 * Source line: 587992
 * Body lines: 7
 */
#include "../../../include/types.h"

int FUN_00422fc0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00424304();
  *puVar1 = &UNK_00900248;
  puVar1[0x1ccf] = &UNK_008ffeb0;
  iVar2 = FUN_00301d0c(puVar1 + 0x1d12,&UNK_00416358,0x28,0xc);
  return iVar2 + -0x7448;
}
