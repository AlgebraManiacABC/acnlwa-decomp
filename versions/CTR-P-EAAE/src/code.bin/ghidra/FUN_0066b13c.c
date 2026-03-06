/**
 * FUN_0066b13c.c
 * Source line: 975997
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0066b13c(int param_1,undefined1 param_2,char param_3,char param_4,byte param_5)

{
  int iVar1;
  
  iVar1 = FUN_002fe8a4(*(undefined1 *)(param_1 + 0x1ac));
  if (iVar1 != 0) {
    iVar1 = FUN_00656c20(param_1);
    *(undefined1 *)(iVar1 + 0x1f) = param_2;
    *(byte *)(iVar1 + 0x1e) =
         ((*(byte *)(iVar1 + 0x1e) & 199 | (param_5 ^ 1) << 5) & 0xbf | param_3 << 6) & 0x7f |
         param_4 << 7;
    FUN_0064d0b8(param_1,0x36,iVar1,0);
    return;
  }
  return;
}
