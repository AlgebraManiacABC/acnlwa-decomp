/**
 * FUN_007476e4.c
 * Source line: 1103459
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_007476e4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0051b110(*param_1,*(undefined1 *)((int)param_1 + 5),*(undefined2 *)((int)param_1 + 6))
  ;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x18);
  }
  return uVar2;
}
