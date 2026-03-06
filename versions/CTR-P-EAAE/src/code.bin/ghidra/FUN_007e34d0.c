/**
 * FUN_007e34d0.c
 * Source line: 1187685
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 * FUN_007e34d0(undefined4 *param_1)

{
  int iVar1;
  int local_18;
  int local_14 [2];
  
  *param_1 = &UNK_008fea30;
  local_14[0] = param_1[1];
  iVar1 = param_1[3];
  while (local_14[0] != iVar1) {
    FUN_007e33e8(&local_18,param_1,local_14);
    local_14[0] = local_18;
  }
  return param_1;
}
