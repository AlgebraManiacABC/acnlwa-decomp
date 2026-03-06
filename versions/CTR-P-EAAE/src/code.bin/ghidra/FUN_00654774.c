/**
 * FUN_00654774.c
 * Source line: 964333
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_00654774(void)

{
  int iVar1;
  
  if ((_DAT_009753e0 != NULL) &&
     ((iVar1 = (**(code **)(*_DAT_009753e0 + 0xc))(), iVar1 == 2 ||
      ((_DAT_009753e0 != NULL && (iVar1 = (**(code **)(*_DAT_009753e0 + 0xc))(), iVar1 == 3)))))) {
    return 1;
  }
  return 0;
}
