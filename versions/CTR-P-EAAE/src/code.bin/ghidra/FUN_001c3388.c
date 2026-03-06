/**
 * FUN_001c3388.c
 * Source line: 229705
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_001c3388(int param_1)

{
  int iVar1;
  
  if ((*(code **)(*(int *)(param_1 + 0x4c) + 0xa4c) == FUN_002673a0) &&
     (*(int *)(*(int *)(param_1 + 0x4c) + 0xa50) == 0)) {
    iVar1 = FUN_007237e0();
    if (iVar1 != 0) {
      FUN_0029b5fc(param_1 + 0x84b8);
      FUN_00816a0c(param_1 + 0x28,FUN_001c2ddc,0);
    }
  }
  return;
}
