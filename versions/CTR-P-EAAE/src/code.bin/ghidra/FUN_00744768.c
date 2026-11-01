#include "../../../include/types.h"

void FUN_00744768(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x44))(*(int **)(param_1 + 4),param_2);
  if ((iVar1 == 0) &&
     ((iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x44))(*(int **)(param_1 + 8),param_2),
      iVar1 != 0 || (*(char *)(param_1 + 0xc) == '\0')))) {
    (**(code **)(**(int **)(param_1 + 8) + 0x38))(*(int **)(param_1 + 8),param_2);
    return;
  }
  (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),param_2);
  return;
}
