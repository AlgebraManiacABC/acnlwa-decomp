/**
 * FUN_0076e438.c
 * Source line: 1131387
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_0076e438(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + (*(byte *)(param_1 + 0x24) & 1) * 4 + 0x584);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (int)*(char *)(iVar1 + 0x166a);
  }
  return iVar2;
}
