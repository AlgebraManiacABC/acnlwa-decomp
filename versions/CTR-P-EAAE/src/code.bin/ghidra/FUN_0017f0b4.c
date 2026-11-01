#include "../../../include/types.h"

void FUN_0017f0b4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00139c30();
  if (iVar1 == 0) {
    FUN_001396c0(param_1,FUN_0016f8d8);
    return;
  }
  if (*(code **)(iRam0097519c + 0xe4dc) != NULL) {
    (**(code **)(iRam0097519c + 0xe4dc))(param_1,0);
    return;
  }
  return;
}
