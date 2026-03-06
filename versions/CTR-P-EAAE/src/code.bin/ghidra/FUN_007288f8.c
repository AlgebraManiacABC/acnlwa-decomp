/**
 * FUN_007288f8.c
 * Source line: 1081786
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_007288f8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while ((*(char *)(param_1 + iVar1) == '\0' && (*(char *)(param_1 + iVar1 + 1) == '\0'))) {
    iVar1 += 2;
    if (7 < iVar1) {
      return 1;
    }
  }
  return 0;
}
