/**
 * FUN_003955c0.c
 * Source line: 502715
 * Body lines: 10
 */
#include "../../../include/types.h"

bool FUN_003955c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_10;
  undefined4 local_c [2];
  
  local_10 = 0;
  local_c[0] = param_2;
  iVar1 = FUN_004847ec(&local_10,*(undefined4 *)(param_1 + 8),0,8,local_c,4);
  if (iVar1 < 0) {
    local_10 = FUN_00486bfc();
  }
  return local_10 != 0;
}
