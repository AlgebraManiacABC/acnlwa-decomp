/**
 * FUN_00718010.c
 * Source line: 1071333
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_00718010(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  do {
    if ((uVar2 < 8) && (iVar1 = FUN_002fcb34(param_1 + uVar2 * 4 + 0x14), iVar1 != 0x7c)) {
      iVar3 += 1;
    }
    uVar2 += 1;
  } while ((int)uVar2 < 8);
  return iVar3;
}
