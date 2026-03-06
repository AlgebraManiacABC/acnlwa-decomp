/**
 * FUN_00100dfc.c
 * Source line: 104269
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00100dfc(int param_1,int param_2,char *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_28;
  int local_24;
  undefined4 uStack_4;
  
  local_24 = param_1;
  if (param_2 != 0) {
    local_24 = param_1 + param_2 + -1;
  }
  local_28 = param_1;
  uStack_4 = param_4;
  uVar1 = FUN_002f7a2e(param_3,&local_28,&uStack_4,&DAT_00101a95);
  if (param_2 != 0) {
    FUN_002f7c90(0,&local_28);
  }
  return uVar1;
}
