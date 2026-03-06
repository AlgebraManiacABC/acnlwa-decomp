/**
 * FUN_00159ee4.c
 * Source line: 172638
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_00159ee4(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(short *)(param_1 + 10) != 0) {
    do {
      iVar1 = FUN_00159e10(*(int *)(param_1 + 0xc) + uVar2 * 0x10 + 4,param_2,4);
      if (iVar1 != 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1 & 0xffff;
    } while (uVar2 < *(ushort *)(param_1 + 10));
  }
  return 0xffffffff;
}
