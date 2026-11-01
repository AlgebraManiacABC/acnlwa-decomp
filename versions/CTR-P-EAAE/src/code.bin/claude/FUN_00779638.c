#include "../../../include/types.h"

void FUN_00779638(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xff | (param_2 & 0xff) << 8;
  *param_1 = uVar1 | uVar1 << 0x10;
  return;
}
