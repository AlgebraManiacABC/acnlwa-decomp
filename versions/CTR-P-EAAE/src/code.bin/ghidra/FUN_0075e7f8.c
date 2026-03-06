/**
 * FUN_0075e7f8.c
 * Source line: 1118906
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0075e7f8(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    bVar1 = *(byte *)(param_1 + 4);
    bVar2 = FUN_00624c78(uVar3 & 0xff);
    if ((bVar2 & bVar1) == 0) {
      return 0;
    }
    uVar3 += 1;
  } while ((int)uVar3 < 4);
  return 1;
}
