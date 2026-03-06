/**
 * FUN_002dba64.c
 * Source line: 376084
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002dba64(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00723f18();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x5c68) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x5c64) = 0xffffffff;
    if (*(char *)(param_1 + 0x4ffc) == '\x01') {
      FUN_0031e810(param_1 + 0x4b10);
    }
  }
  *(undefined1 *)(param_1 + 0x4b0d) = 0;
  return;
}
