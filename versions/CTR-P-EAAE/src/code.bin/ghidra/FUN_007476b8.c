/**
 * FUN_007476b8.c
 * Source line: 1103442
 * Body lines: 9
 */
#include "../../../include/types.h"

bool FUN_007476b8(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0051b110(*param_1,*(undefined1 *)((int)param_1 + 5),*(undefined2 *)((int)param_1 + 6))
  ;
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x14);
  }
  return iVar2 == 0 || cVar1 == '\0';
}
