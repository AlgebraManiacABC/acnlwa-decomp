/**
 * FUN_0076e4d4.c
 * Source line: 1131438
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0076e4d4(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00825d6c();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_00745f80();
    *param_2 = *(undefined4 *)(iVar1 + 0xc);
    param_2[1] = *(undefined4 *)(iVar1 + 0x1c);
    param_2[2] = *(undefined4 *)(iVar1 + 0x2c);
    if (param_3 != 0) {
      FUN_0052e3ec(param_2);
    }
    uVar2 = 1;
  }
  return uVar2;
}
