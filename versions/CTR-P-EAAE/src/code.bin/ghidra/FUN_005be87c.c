/**
 * FUN_005be87c.c
 * Source line: 868739
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_005be87c(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 1;
  iVar1 = 1;
  *param_1 = 0xffff;
  do {
    iVar3 = iVar2 + 1;
    iVar1 += 2;
    param_1[iVar2] = 0xffff;
    iVar2 += 2;
    param_1[iVar3] = 0xffff;
  } while (iVar1 < 0xb);
  return;
}
