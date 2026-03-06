/**
 * FUN_00284980.c
 * Source line: 329190
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_00284980(void)

{
  int iVar1;
  
  iVar1 = FUN_006d1e64();
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x208) = 1;
    return 1;
  }
  return 0;
}
