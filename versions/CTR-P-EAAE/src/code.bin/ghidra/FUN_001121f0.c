/**
 * FUN_001121f0.c
 * Source line: 113014
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_001121f0(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      iVar1 = FUN_00301e20(param_2);
      if ((iVar1 != 0) && (*(ushort *)(param_2 + 0x2c) == param_1)) {
        return uVar2;
      }
      uVar2 += 1;
      param_2 += 0x2518;
    } while (uVar2 < param_3);
  }
  return 0xffffffff;
}
