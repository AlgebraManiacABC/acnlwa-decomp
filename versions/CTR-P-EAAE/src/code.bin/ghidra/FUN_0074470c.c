#include "../../../include/types.h"

void FUN_0074470c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))();
  iVar2 = (**(code **)(**(int **)(param_1 + 8) + 8))();
  if (iVar2 <= iVar1) {
    (**(code **)(**(int **)(param_1 + 4) + 0x54))();
    return;
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x54))();
  return;
}
