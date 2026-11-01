#include "../../../include/types.h"

void FUN_00588f0c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00584134();
  *(undefined1 *)(iVar1 + 0x2e) = 1;
  if (*(int **)(param_1 + 0x20) != NULL) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x28))();
    return;
  }
  return;
}
