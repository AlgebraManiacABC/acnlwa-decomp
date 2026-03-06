/**
 * FUN_003958a0.c
 * Source line: 502828
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_003958a0(int param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  iVar1 = FUN_00489930(&local_8,*(undefined4 *)(param_1 + 8),2);
  if (iVar1 < 0) {
    local_8 = FUN_00486bfc();
  }
  return local_8 < 0;
}
