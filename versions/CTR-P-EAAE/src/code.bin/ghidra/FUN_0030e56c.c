/**
 * FUN_0030e56c.c
 * Source line: 412925
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0030e56c(int param_1,short *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((*param_2 == *(short *)(param_1 + 0xc)) && ((char)param_2[10] == *(char *)(param_1 + 0x20)))
      && (iVar1 = FUN_00100d2c((uint *)(param_2 + 1),(uint *)(param_1 + 0xe),0x12), iVar1 == 0)) &&
     (param_2[0x16] == *(short *)(param_1 + 0x22))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
