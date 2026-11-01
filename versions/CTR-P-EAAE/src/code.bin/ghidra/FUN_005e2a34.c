#include "../../../include/types.h"

void FUN_005e2a34(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005d46dc();
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 0x60) + 0x154))();
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x60) + 0x158))();
  return;
}
