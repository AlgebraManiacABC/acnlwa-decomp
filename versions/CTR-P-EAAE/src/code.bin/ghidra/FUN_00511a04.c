/**
 * FUN_00511a04.c
 * Source line: 754994
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00511a04(int param_1)

{
  int iVar1;
  uint local_14;
  
  local_14 = FUN_0044b868(uRam00974a64);
  if (-1 < (int)local_14) {
    while (iVar1 = FUN_00733c50(uRam00974a64), iVar1 == 0) {
      FUN_004ddc34();
    }
    local_14 = FUN_00733bbc(uRam00974a64);
    if ((local_14 & 0x80000000) == 0) {
      *(undefined1 *)(param_1 + 0x6a) = 0;
      return 1;
    }
  }
  FUN_0051207c(param_1,3,&local_14,0,0);
  return 0;
}
