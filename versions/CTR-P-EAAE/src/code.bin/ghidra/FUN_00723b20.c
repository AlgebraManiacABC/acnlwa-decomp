/**
 * FUN_00723b20.c
 * Source line: 1078552
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00723b20(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_14 = *param_2;
  uStack_10 = param_2[1];
  local_c = param_2[2];
  FUN_0030a488(&local_14,0xffffffff,0,0,0);
  iVar1 = FUN_0058dc80(0,local_14,uStack_10,local_c,1);
  if ((iVar1 == 0) &&
     ((iVar1 = FUN_002fb338(param_1 + 0xe), iVar1 == 0 ||
      (iVar1 = FUN_003036dc(param_1 + 0xe,&local_14,1), 0 < iVar1)))) {
    return 1;
  }
  return 0;
}
