#include "../../../include/types.h"

undefined8 FUN_00779464(int *param_1)

{
  int iVar1;
  undefined8 local_10;
  
  iVar1 = FUN_0013f28c((int)param_1 + *(int *)(*param_1 + -0x2c) + 8,&local_10);
  if (iVar1 < 0) {
    FUN_0012f598(iVar1,0x77948c);
  }
  return local_10;
}
