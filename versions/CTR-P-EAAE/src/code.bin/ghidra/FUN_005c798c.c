/**
 * FUN_005c798c.c
 * Source line: 876490
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_005c798c(uint param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 < 4) {
    uVar1 = FUN_00305f44();
    if (uVar1 == param_1) {
      iVar2 = param_1 * 0x26 + 0xaad9a4;
    }
    else {
      iVar2 = 0xa84768;
    }
    FUN_005c6878(iVar2,param_1,param_2,param_3,param_4,param_5);
    FUN_0062512c((&UNK_00881b8c)[param_1],iVar2,0);
    return iVar2;
  }
  return 0;
}
