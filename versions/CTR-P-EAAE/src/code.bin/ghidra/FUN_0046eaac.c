/**
 * FUN_0046eaac.c
 * Source line: 639983
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0046eaac(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  uVar1 = 0;
  do {
    bVar2 = *(char *)(param_1 + uVar1) == '\0';
    bVar3 = param_2 != uVar1;
    bVar4 = uVar1 <= param_2;
    if (!bVar2 && uVar1 < param_2) {
      uVar1 += 1;
    }
  } while ((bVar2 || bVar4) && (!bVar2 && bVar3));
  return;
}
