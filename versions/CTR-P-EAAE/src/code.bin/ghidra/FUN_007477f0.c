/**
 * FUN_007477f0.c
 * Source line: 1103535
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined2 FUN_007477f0(undefined4 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = FUN_0051b110(*param_1,*(undefined1 *)((int)param_1 + 5),*(undefined2 *)((int)param_1 + 6))
  ;
  if ((iVar2 == 0) || (*(char *)(iVar2 + 0x14) != '\x02')) {
    uVar1 = 0x7ffe;
  }
  else {
    uVar1 = *(undefined2 *)(iVar2 + 0x16);
  }
  return uVar1;
}
