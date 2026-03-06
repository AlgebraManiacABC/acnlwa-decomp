/**
 * FUN_0072f27c.c
 * Source line: 1086298
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined1 FUN_0072f27c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0072f198();
  if ((iVar1 == 0) &&
     ((cRam00974a54 == '\0' ||
      ((iVar1 = FUN_007304d0(*(undefined4 *)(param_1 + 0x14)), iVar1 == 0 &&
       ((cRam00974a54 == '\0' || (iVar1 = FUN_007304f4(*(undefined4 *)(param_1 + 0x14)), iVar1 == 0)
        ))))))) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x80);
}
