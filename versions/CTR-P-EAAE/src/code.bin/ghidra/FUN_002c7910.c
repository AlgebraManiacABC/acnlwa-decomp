/**
 * FUN_002c7910.c
 * Source line: 365312
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002c7910(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00723f18();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x6c40) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x6c3c) = 0xffffffff;
    if (*(char *)(param_1 + 0x6bd0) == '\x01') {
      FUN_0031e810(param_1 + 0x66e4);
      return;
    }
  }
  return;
}
