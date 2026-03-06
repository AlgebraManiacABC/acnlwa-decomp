/**
 * FUN_0017f0b4.c
 * Source line: 197115
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0017f0b4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00139c30();
  if (iVar1 == 0) {
    FUN_001396c0(param_1,FUN_0016f8d8);
    return;
  }
  if (*(code **)(iRam0097519c + 0xe4dc) != NULL) {
          // WARNING: Could not recover jumptable at 0x0017f0f0. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iRam0097519c + 0xe4dc))(param_1,0);
    return;
  }
  return;
}
