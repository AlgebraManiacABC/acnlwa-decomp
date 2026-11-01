#include "../../../include/types.h"

uint FUN_00735520(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 4) + 0xc);
  return ((uVar1 >> 0x10) << 0x18 | (uVar1 >> 0x18) << 0x10) >> 0x10;
}
