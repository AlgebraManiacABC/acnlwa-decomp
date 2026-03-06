/**
 * FUN_005c0950.c
 * Source line: 870103
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_005c0950(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005c33d0(4,0);
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0x1a9) == '\x11')) &&
     (iVar2 = FUN_006548c4(iVar1,iVar1 + 0x14,*(undefined2 *)(iVar1 + 0x2e),param_1,2,1), iVar2 != 0
     )) {
    *(undefined1 *)(iVar1 + 0x1ab) = 6;
    return 1;
  }
  return 0;
}
