/**
 * FUN_002e8dfc.c
 * Source line: 383036
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_002e8dfc(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x3c) = 8;
  if (*(char *)(param_1 + 0x78) < 0) {
    iVar1 = 0x100038b;
  }
  else {
    iVar1 = *(char *)(param_1 + 0x78) + 0x1000789;
  }
  if (*(char *)(param_1 + 0x34) == '\0') {
    *(undefined1 *)(param_1 + 0x39) = 0;
    FUN_0020a4cc(param_1);
    *(int *)(param_1 + 0x5c) = iVar1;
  }
  return;
}
