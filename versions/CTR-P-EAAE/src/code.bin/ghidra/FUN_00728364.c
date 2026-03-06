/**
 * FUN_00728364.c
 * Source line: 1081474
 * Body lines: 12
 */
#include "../../../include/types.h"

uint FUN_00728364(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int local_14;
  
  if (param_3 != 0) {
    local_14 = 0;
    __rt_memclr_w(param_2,0x60);
    uVar1 = (**(code **)(*param_1 + 0x34))(param_1,param_2,0x60,&local_14,param_3,2,0x12);
    if (((uVar1 & 0x3ff) != 0x3f7) && (local_14 == 0)) {
      uVar1 = 0xc8810bef;
    }
    return uVar1;
  }
  return 0xe0e10bfd;
}
