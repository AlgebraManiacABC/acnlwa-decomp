/**
 * FUN_001eb6d0.c
 * Source line: 252109
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_001eb6d0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (((*(int *)(param_1 + 400) == 7) && (iVar1 = FUN_0027d44c(param_1), iVar1 != 0)) &&
     (*(short *)(param_1 + 0x200) != 0)) {
    uVar2 = FUN_00305f44();
    if (uVar2 == *(byte *)(param_1 + 0x119)) {
      FUN_002d5920(param_1 + 0x11c,0);
    }
    iVar1 = FUN_0027d394(param_1);
    if (iVar1 != 0) {
      FUN_007c7834(param_1 + 0x18c,8);
    }
    return 1;
  }
  return 0;
}
