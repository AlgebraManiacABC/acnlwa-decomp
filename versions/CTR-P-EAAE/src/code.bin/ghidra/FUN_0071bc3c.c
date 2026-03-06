/**
 * FUN_0071bc3c.c
 * Source line: 1074144
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0071bc3c(int param_1,int *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  
  *param_3 = 2;
  if (*(int *)(param_1 + 0x260) != -1) {
    uVar1 = FUN_0075c0ec(DAT_0095debc,param_2,"STR_SPNpc_name");
    return uVar1;
  }
  (**(code **)(*param_2 + 0x1c))();
  return 1;
}
