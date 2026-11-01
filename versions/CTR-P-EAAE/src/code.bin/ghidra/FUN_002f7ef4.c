#include "../../../include/types.h"

void FUN_002f7ef4(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2434);
  if (((int)param_2 < iVar1) || (iVar1 + 4U <= param_2)) {
    iVar1 = -1;
  }
  else {
    iVar1 = param_2 - iVar1;
  }
  (**(code **)(*(int *)(param_1 + iVar1 * 0x290 + 0x18b4) + 0x60))();
  return;
}
