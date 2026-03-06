/**
 * FUN_00340c8c.c
 * Source line: 439880
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00340c8c(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x5b61) = 0;
  iVar1 = FUN_00723f18();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x5b4c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x5b48) = 0xffffffff;
    if (*(char *)(param_1 + 0x59b4) == '\x01') {
      FUN_0031e810(param_1 + 0x54c8);
      return;
    }
  }
  return;
}
