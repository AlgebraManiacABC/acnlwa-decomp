/**
 * FUN_00239f74.c
 * Source line: 290880
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00239f74(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0xf0);
  if ((*(char *)(iVar1 + 0xa8) == '\x04') && (*(char *)(iVar1 + 0x554) != '\0')) {
    FUN_006e9c2c(param_1[8],iVar1 + 0x78,0);
    *(undefined1 *)((int)param_1 + 0x19) = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 5;
  }
  else if (*(char *)((int)param_1 + 0xd) != '\x05') {
    return;
  }
  *(undefined1 *)((int)param_1 + 0x1a) = 1;
  return;
}
