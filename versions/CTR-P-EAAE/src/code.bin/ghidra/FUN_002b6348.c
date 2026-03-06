/**
 * FUN_002b6348.c
 * Source line: 353899
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_002b6348(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x5d) == '\0') {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x14 + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_004eba34(iVar1,0);
      }
      iVar2 += 1;
    } while (iVar2 < 9);
  }
  return 2;
}
