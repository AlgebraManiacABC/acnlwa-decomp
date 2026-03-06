/**
 * FUN_00170478.c
 * Source line: 187148
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00170478(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  uVar1 = FUN_0013dfbc(param_1 + 0x138,&local_10,param_2,param_3);
  *(uint *)(param_1 + 0x14) = uVar1;
  if ((uVar1 & 0x80000000) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = local_10;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0xb;
    *(undefined4 *)(param_1 + 8) = 0xffffff80;
  }
  return *(undefined4 *)(param_1 + 4);
}
