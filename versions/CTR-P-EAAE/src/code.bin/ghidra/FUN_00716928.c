/**
 * FUN_00716928.c
 * Source line: 1070690
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00716928(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while ((*(char *)(param_1 + iVar1) == '\0' && (*(char *)(param_1 + iVar1 + 1) == '\0'))) {
    iVar1 += 2;
    if (0x27 < iVar1) {
      return 0;
    }
  }
  return 1;
}
