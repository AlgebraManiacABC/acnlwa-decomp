/**
 * FUN_00514c3c.c
 * Source line: 756960
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00514c3c(undefined4 param_1)

{
  int iVar1;
  uint local_14 [2];
  
  local_14[0] = FUN_0044b0fc(uRam00974a64,2,1);
  if (-1 < (int)local_14[0]) {
    while (iVar1 = FUN_00733b8c(uRam00974a64), iVar1 == 0) {
      FUN_004ddc34();
    }
    local_14[0] = FUN_00733b14(uRam00974a64);
    if ((local_14[0] & 0x80000000) == 0) {
      return 1;
    }
  }
  FUN_0051207c(param_1,3,local_14,0,0);
  return 0;
}
