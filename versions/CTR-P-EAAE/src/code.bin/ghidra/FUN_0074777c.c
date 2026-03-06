/**
 * FUN_0074777c.c
 * Source line: 1103510
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0074777c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0051b110(*param_1,*(undefined1 *)((int)param_1 + 5),*(undefined2 *)((int)param_1 + 6))
  ;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
  }
  return uVar2;
}
