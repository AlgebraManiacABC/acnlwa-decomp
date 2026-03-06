/**
 * FUN_006d62d0.c
 * Source line: 1034568
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_006d62d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_006d720c();
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x1917) == '\x01') {
      *(undefined1 *)(param_1 + 0x1917) = 0;
      *(uint *)(param_1 + 0x6ec) = *(uint *)(param_1 + 0x6ec) & 0xfffffff7;
    }
    FUN_0081bb74(param_1 + 0x14,FUN_006d5430,0);
  }
  return;
}
