#include "../../../include/types.h"

void FUN_0053ac30(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004264d8();
  if ((piVar1 == NULL) && (piVar1 = (int *)FUN_00749010(uRam0097d40c), piVar1 == NULL)) {
    return;
  }
  (**(code **)(*piVar1 + 0x18))(piVar1,param_1,4);
  return;
}
