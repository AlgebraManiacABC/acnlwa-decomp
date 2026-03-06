/**
 * FUN_0075e448.c
 * Source line: 1118698
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0075e448(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = FUN_0075dfe8(DAT_0095362c);
  if (iVar1 == 0) {
    uVar3 = 0;
    do {
      uVar2 = FUN_0075ea7c(param_1 + 6,uVar3 & 0xff);
      if (uVar2 < 4) {
        return 1;
      }
      uVar3 += 1;
    } while ((int)uVar3 < 4);
  }
  return 0;
}
