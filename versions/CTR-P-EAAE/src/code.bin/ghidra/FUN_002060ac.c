/**
 * FUN_002060ac.c
 * Source line: 264746
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_002060ac(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((short)param_1[0x9f] == 4) ||
     (iVar1 = FUN_002052f8(param_1,param_1[0xd8],*(undefined2 *)((int)param_1 + 0x27e),1), uVar2 = 0
     , iVar1 != 0)) {
    if (param_1[0x1f] != 0) {
      FUN_004ef3a4(param_1 + 0x33);
      FUN_0031e0d8(param_1 + 0xac);
      (**(code **)(param_1[0x1e] + 0xc))(param_1 + 0x1e);
    }
    FUN_002f73b8(param_1 + 0x57);
    (**(code **)(*param_1 + 0x48))(param_1,param_1 + 0x51,param_1 + 0x53,param_1 + 0x55);
    uVar2 = 1;
  }
  return uVar2;
}
