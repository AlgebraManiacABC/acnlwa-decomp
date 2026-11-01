#include "../../../include/types.h"

void FUN_00654834(int param_1)

{
  undefined4 uVar1;
  
  if (((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) &&
     ((int)((uint)*(byte *)(param_1 + 0x177) << 0x19) < 0)) {
    *(byte *)(param_1 + 0x177) = *(byte *)(param_1 + 0x177) & 0xbf;
    uVar1 = FUN_0058c19c();
    FUN_00584074(uVar1,0x2d);
  }
  return;
}
