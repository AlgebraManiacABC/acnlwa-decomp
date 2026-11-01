#include "../../../include/types.h"

void FUN_0053814c(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00749030(uRam0097d40c,param_1);
  if (piVar1 != NULL) {
    (**(code **)(*piVar1 + 0x1c))(piVar1,param_1);
    return;
  }
  return;
}
