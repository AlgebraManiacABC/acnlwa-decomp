/**
 * FUN_00565fe8.c
 * Source line: 808256
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_00565fe8(void)

{
  int iVar1;
  
  if (((_DAT_009753e0 == NULL) || (iVar1 = (**(code **)(*_DAT_009753e0 + 0xc))(), iVar1 == 1)) &&
     ((_DAT_009753e4 == NULL || (iVar1 = (**(code **)(*_DAT_009753e4 + 0xc))(), iVar1 == 1)))) {
    return 1;
  }
  return 0;
}
