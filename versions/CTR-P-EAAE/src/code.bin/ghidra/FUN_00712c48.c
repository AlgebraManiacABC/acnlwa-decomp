#include "../../../include/types.h"

uint FUN_00712c48(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 4);
  if (0xf < uVar1) {
    uVar1 = 0;
  }
  uVar1 >>= 1;
  if (7 < uVar1) {
    uVar1 = 0;
  }
  return uVar1;
}
