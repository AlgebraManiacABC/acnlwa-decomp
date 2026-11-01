#include "../../../include/types.h"

void FUN_003075cc(undefined4 param_1)

{
  int *piVar1;
  
  if (DAT_00975338 == 0) {
    FUN_002f75a0(param_1,0,4,1);
    return;
  }
  piVar1 = (int *)FUN_003045a8(DAT_00975338);
  if (piVar1 != NULL) {
    (**(code **)(*piVar1 + 0x18))(piVar1,param_1,4);
    return;
  }
  return;
}
