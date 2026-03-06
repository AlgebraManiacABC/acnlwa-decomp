/**
 * FUN_007e35cc.c
 * Source line: 1187764
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_007e35cc(void)

{
  int iVar1;
  
  iVar1 = FUN_007e35fc();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x007e35ec. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
