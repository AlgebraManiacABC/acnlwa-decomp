/**
 * FUN_0017e840.c
 * Source line: 196711
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0017e840(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00139c30();
  if ((iVar1 != 0 && iVar1 != 10) && (*(int *)(param_1 + 0x14) < 0)) {
    FUN_0012f598(*(int *)(param_1 + 0x14),0x17e860);
  }
  if (*(code **)(iRam0097519c + 0xe4cc) != NULL) {
          // WARNING: Could not recover jumptable at 0x0017e888. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iRam0097519c + 0xe4cc))();
    return;
  }
  return;
}
