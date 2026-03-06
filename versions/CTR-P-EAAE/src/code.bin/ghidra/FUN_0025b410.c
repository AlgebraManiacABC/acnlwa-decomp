/**
 * FUN_0025b410.c
 * Source line: 307092
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0025b410(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_006b04f0(param_1 + 0x800);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(param_1 + 0x824) + 0x18))(param_1 + 0x824);
    FUN_002fb94c();
    return;
  }
  return;
}
