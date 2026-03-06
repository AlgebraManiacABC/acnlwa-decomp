/**
 * FUN_00728970.c
 * Source line: 1081833
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00728970(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (int)(param_1[1] - *param_1) >> 1;
  if (uVar1 < 0x101) {
    *param_2 = uVar1;
    param_2[1] = *param_1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xe0e046c7;
  }
  return uVar2;
}
