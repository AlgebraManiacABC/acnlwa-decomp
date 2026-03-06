/**
 * FUN_002fe940.c
 * Source line: 396876
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_002fe940(short *param_1,short *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((*param_1 == *param_2) &&
       ((char)((char)param_1[10] * -0x80) == (char)((char)param_2[10] * -0x80))) &&
      (iVar1 = FUN_00712c88(param_1 + 1,param_2 + 1), iVar1 != 0)) &&
     (((param_1[0xb] == param_2[0xb] && ((char)param_1[0x15] == (char)param_2[0x15])) &&
      (iVar1 = FUN_00100d2c((uint *)(param_1 + 0xc),(uint *)(param_2 + 0xc),0x12), iVar1 == 0)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
