/**
 * FUN_0070cb5c.c
 * Source line: 1064507
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_0070cb5c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  do {
    if (((uVar2 & 0xff) == 0) || (iVar1 = FUN_00624f00(uVar2 & 0xff), iVar1 != 0)) {
      iVar3 += *(int *)(param_1 + uVar2 * 4 + 0x10);
    }
    uVar2 += 1;
  } while ((int)uVar2 < 4);
  return iVar3;
}
