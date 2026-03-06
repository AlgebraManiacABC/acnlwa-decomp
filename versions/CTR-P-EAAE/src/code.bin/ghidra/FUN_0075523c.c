/**
 * FUN_0075523c.c
 * Source line: 1110811
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0075523c(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (((*(char *)(param_1 + 4) != '\0') && (*(int *)(param_1 + 0x24) <= *(int *)(param_1 + 0x20)))
     && (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x18))) {
    iVar2 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c) * 0x228;
    cVar1 = '\0';
    if (iVar2 != 0) {
      cVar1 = *(char *)(iVar2 + 0x21c);
    }
    if (iVar2 != 0 && cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}
