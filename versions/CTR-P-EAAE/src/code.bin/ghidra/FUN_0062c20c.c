/**
 * FUN_0062c20c.c
 * Source line: 944562
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0062c20c(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int local_10;
  short local_c [2];
  
  local_10 = *param_3;
  if (local_10 != 0) {
    local_c[0] = (short)param_3[1];
    if (local_c[0] != 0) {
      param_3 = (int *)(uint)*(ushort *)((int)param_3 + 6);
    }
    if (local_c[0] != 0 && param_3 != NULL) {
      uVar1 = FUN_0062c2bc(param_1 + 0x28ec,param_2,&local_10,local_c);
      return uVar1;
    }
  }
  return 0;
}
