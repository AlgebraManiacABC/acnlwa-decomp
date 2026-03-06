/**
 * FUN_0021da38.c
 * Source line: 275747
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0021da38(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00723f18();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xd3cc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xd3c8) = 0xffffffff;
    if (*(char *)(param_1 + 0xd3c4) == '\x01') {
      FUN_0031e810(param_1 + 0xced8);
      return;
    }
  }
  return;
}
