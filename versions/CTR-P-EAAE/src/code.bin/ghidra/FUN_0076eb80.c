/**
 * FUN_0076eb80.c
 * Source line: 1131858
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0076eb80(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_006158c4();
  cVar1 = *(char *)(iVar2 + *(char *)(param_1 + 0xc) * 0x14 + 0x19);
  if (cVar1 == '\0') {
    uVar3 = 1;
  }
  else if (cVar1 == '\x01') {
    uVar3 = 2;
  }
  else {
    uVar3 = 3;
  }
  return uVar3;
}
