#include "../../../include/types.h"

void FUN_0076f38c(int param_1,uint param_2)

{
  int *piVar1;
  
  if (param_2 < *(uint *)(param_1 + 0x67cc)) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x67d4) + param_2 * 4);
  }
  else {
    piVar1 = NULL;
  }
  (**(code **)(*piVar1 + 0xa0))();
  return;
}
