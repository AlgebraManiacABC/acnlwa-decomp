/**
 * FUN_0076e458.c
 * Source line: 1131403
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_0076e458(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + (*(byte *)(param_1 + 0x24) & 1) * 4 + 0x584);
  if ((iVar1 != 0) && ((*(char *)(iVar1 + 0x166a) == '\0' || (*(short *)(iVar1 + 0x1664) != 0)))) {
    return 0;
  }
  return 1;
}
