/**
 * FUN_002ff81c.c
 * Source line: 397654
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_002ff81c(short *param_1,short *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*param_1 == *param_2) && ((char)param_1[10] == (char)param_2[10])) &&
     (iVar1 = FUN_00100d2c((uint *)(param_1 + 1),(uint *)(param_2 + 1),0x12), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
