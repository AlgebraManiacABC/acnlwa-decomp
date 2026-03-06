/**
 * FUN_00511468.c
 * Source line: 754759
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00511468(int param_1)

{
  int iVar1;
  int local_14 [2];
  
  local_14[0] = FUN_0044b7d8(uRam00974a64);
  if (-1 < local_14[0]) {
    while (iVar1 = FUN_00733c20(uRam00974a64), iVar1 == 0) {
      FUN_004ddc34();
    }
    local_14[0] = FUN_00733b84(uRam00974a64);
    if (-1 < local_14[0]) {
      *(undefined1 *)(param_1 + 0x6a) = 1;
      return 1;
    }
  }
  FUN_0051207c(param_1,3,local_14,0,0);
  return 0;
}
