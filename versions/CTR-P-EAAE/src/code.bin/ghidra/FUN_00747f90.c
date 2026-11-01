#include "../../../include/types.h"

void FUN_00747f90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = 0;
  if (*(int **)(param_1 + 4) != NULL) {
    (**(code **)(**(int **)(param_1 + 4) + 0xc))();
    iVar1 = FUN_003df908();
    if (0 < iVar1) {
      uVar2 = 1;
    }
  }
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}
