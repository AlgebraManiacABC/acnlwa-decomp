#include "../../../include/types.h"

void FUN_00744678(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xc))();
  iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0xc))();
  if (iVar2 <= iVar1) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))();
    return;
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x14))();
  return;
}
