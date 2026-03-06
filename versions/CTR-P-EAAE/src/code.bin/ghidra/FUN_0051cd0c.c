/**
 * FUN_0051cd0c.c
 * Source line: 761866
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0051cd0c(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(ushort *)(&DAT_00a8335e + iVar1 * 2) == param_1) {
      return 1;
    }
    iVar1 += 1;
  } while (iVar1 != 9);
  return 0;
}
