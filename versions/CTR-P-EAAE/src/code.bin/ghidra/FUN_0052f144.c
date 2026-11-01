#include "../../../include/types.h"

void FUN_0052f144(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != NULL) {
    param_3 = (int *)param_1[1];
  }
  if (piVar1 != NULL && param_3 != NULL) {
    if (param_1[2] < *param_3) {
      param_1[2] = param_1[2] + 1;
    }
    else {
      param_1[2] = *piVar1;
      param_1[3] = param_1[3] + 1;
    }
  }
  return;
}
