/**
 * FUN_0075a9e8.c
 * Source line: 1115612
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_0075a9e8(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  do {
    if (((uint)DAT_0094fd34 & 1 << (uVar1 & 0xff)) != 0) {
      if (param_2 - *param_1 >> 2 == iVar2) {
        return uVar1;
      }
      iVar2 += 1;
    }
    uVar1 += 1;
  } while ((int)uVar1 < 0x10);
  return 0xffffffff;
}
