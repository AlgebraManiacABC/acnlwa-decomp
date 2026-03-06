/**
 * FUN_002dd2e0.c
 * Source line: 376679
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002dd2e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00723f18();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xb248) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xb244) = 0xffffffff;
    if (*(char *)(param_1 + 0xb240) == '\x01') {
      FUN_0031e810(param_1 + 0xad54);
      return;
    }
  }
  return;
}
