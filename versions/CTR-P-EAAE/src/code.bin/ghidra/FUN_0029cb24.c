/**
 * FUN_0029cb24.c
 * Source line: 341461
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0029cb24(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)FUN_006268f8(iVar3 + 9U & 0xff);
    puVar2 = (undefined4 *)(param_1 + 0x10 + iVar3 * 0x10);
    iVar3 += 1;
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
  } while (iVar3 != 0x3f);
  return;
}
