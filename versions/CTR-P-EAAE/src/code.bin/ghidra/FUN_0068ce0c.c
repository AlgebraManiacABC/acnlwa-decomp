/**
 * FUN_0068ce0c.c
 * Source line: 993148
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0068ce0c(undefined4 param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  bVar1 = *(byte *)(param_2 + 0xe);
  cVar2 = *(char *)(param_2 + 0xf);
  iVar3 = FUN_002fe8a8();
  if ((iVar3 != 0) && (bVar1 < 4)) {
    uVar4 = FUN_002a7190(iVar3 + 0x5544,bVar1);
    FUN_0027ad5c(iVar3 + 10,uVar4,cVar2 != '\0');
    return;
  }
  return;
}
