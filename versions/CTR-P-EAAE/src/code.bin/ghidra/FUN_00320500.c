#include "../../../include/types.h"

void FUN_00320500(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 <= param_2) && (param_2 < uVar1 + 10)) {
    param_1 += (param_2 - uVar1) * 0x2b4;
  }
  (**(code **)(*(int *)(param_1 + 0x3d4) + 0x4c))((int *)(param_1 + 0x3d4),1);
  return;
}
