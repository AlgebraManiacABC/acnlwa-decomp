/**
 * FUN_001879e0.c
 * Source line: 200390
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_001879e0(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_0095362c;
  *(undefined1 *)(DAT_0095362c + 0x28e3) = 1;
  bVar1 = *param_2;
  *(byte *)(iVar2 + 0x27a3) = bVar1;
  uVar3 = FUN_00305f44();
  if (bVar1 != uVar3) {
    FUN_00623e70(DAT_0095362c + 0x27d4,uVar3,0);
    return;
  }
  return;
}
