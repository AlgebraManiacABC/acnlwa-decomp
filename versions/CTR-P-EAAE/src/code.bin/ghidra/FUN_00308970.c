/**
 * FUN_00308970.c
 * Source line: 406738
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_00308970(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00301e20();
  if ((iVar1 != 0) && (uVar2 = 0, param_3 != 0)) {
    do {
      if (((*(short *)(param_1 + 0x2c) == *(short *)(param_2 + 0x2c)) &&
          (iVar1 = FUN_002ff81c(param_1,param_2), iVar1 != 0)) &&
         (iVar1 = FUN_002ff81c(param_1 + 0x16,param_2 + 0x16), iVar1 != 0)) {
        return uVar2;
      }
      uVar2 += 1;
      param_2 += 0x2518;
    } while (uVar2 < param_3);
  }
  return 0xffffffff;
}
