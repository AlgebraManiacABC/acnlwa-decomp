/**
 * FUN_0032c970.c
 * Source line: 431983
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0032c970(int param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (3 < *(byte *)(param_1 + iVar1 + 8)) {
      *(undefined1 *)(param_1 + iVar1 + 8) = param_2;
      *(undefined1 *)(param_1 + iVar1 + 0x12) = param_3;
      return 1;
    }
    iVar1 += 1;
  } while (iVar1 < 10);
  return 0;
}
