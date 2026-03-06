/**
 * FUN_001eb09c.c
 * Source line: 251902
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_001eb09c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0056b1b8(param_1 + 0x1c4,0,0x30);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x11a) = 1;
    FUN_0027da80(param_1);
  }
  FUN_002fcdac(param_1 + 0xd0,*(undefined4 *)(param_1 + 0x1c4),(int)*(char *)(param_1 + 0x205),0);
  return;
}
