/**
 * FUN_004d4950.c
 * Source line: 717538
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_004d4950(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00135748(param_1 + 4);
    FUN_00141490(param_1 + 0x10);
    FUN_001357ec(param_1 + 4);
    uVar1 = FUN_00140f54();
    uVar2 = FUN_00140fac(uVar1,1);
    FUN_001411ec(uVar1,uVar2);
    return;
  }
  return;
}
