/**
 * FUN_0034c240.c
 * Source line: 448725
 * Body lines: 12
 */
#include "../../../include/types.h"

uint FUN_0034c240(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = (**(code **)(*piRam00974f64 + 8))(piRam00974f64,param_5);
  uVar2 = FUN_00128e80(param_1,param_2,param_3,param_4,uVar1,param_6,param_7,1);
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else {
    (**(code **)(*piRam00974f64 + 0xc))(piRam00974f64,uVar1,1);
  }
  return uVar2;
}
