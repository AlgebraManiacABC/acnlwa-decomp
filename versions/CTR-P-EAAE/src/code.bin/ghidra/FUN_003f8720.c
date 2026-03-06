/**
 * FUN_003f8720.c
 * Source line: 565372
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_003f8720(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_003e2e68(param_1,0);
  if (((*(int *)(iVar1 + 8) == 0) || (iVar1 = FUN_003e2e68(param_1,2), *(int *)(iVar1 + 8) == 0)) &&
     (*(uint *)(param_1 + 0x14) < 3)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
