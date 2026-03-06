/**
 * FUN_001cce78.c
 * Source line: 234036
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_001cce78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_001ccc58(param_1,5,param_2,param_4,param_5);
  if (iVar1 != 0) {
    *(undefined4 *)
     (*(int *)(param_1 + 8) + ((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x28) * 0x28 +
     -0x24) = param_3;
  }
  return iVar1 != 0;
}
