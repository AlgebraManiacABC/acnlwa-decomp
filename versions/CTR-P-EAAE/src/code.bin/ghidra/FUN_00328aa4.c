#include "../../../include/types.h"

void FUN_00328aa4(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x94];
  if (piVar1 != param_1 && piVar1 != NULL) {
    (**(code **)(*piVar1 + 0x34))(piVar1);
    return;
  }
  FUN_002fb94c(param_1[0x3c]);
  return;
}
