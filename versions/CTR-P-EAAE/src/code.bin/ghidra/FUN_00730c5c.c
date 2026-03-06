/**
 * FUN_00730c5c.c
 * Source line: 1087414
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00730c5c(undefined4 *param_1,int param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 *in_r12;
  bool bVar2;
  
  bVar2 = param_2 - 0x100000U < 0x3ff00000;
  uVar1 = 0xe0e14826;
  if (bVar2) {
    in_r12 = param_3 + -0x40000;
  }
  if ((bVar2 && in_r12 < (undefined4 *)0x3ff00000) && (5 < param_4)) {
    FUN_00426714(param_2,*param_1);
    FUN_00426704(param_2 + 4,*(undefined2 *)(param_1 + 1));
    *param_3 = 6;
    uVar1 = 0;
  }
  return uVar1;
}
