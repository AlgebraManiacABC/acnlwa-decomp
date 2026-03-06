/**
 * FUN_00724f64.c
 * Source line: 1079319
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_00724f64(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    iVar3 = param_1 + iVar2;
    iVar2 += 1;
    if (*(byte *)(iVar3 + 8) < 4) {
      iVar1 += 1;
    }
  } while (iVar2 < 10);
  return iVar1;
}
