/**
 * FUN_0022e678.c
 * Source line: 283999
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0022e678(int param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_008b1b88(_DAT_0094dfa8);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x5a) = 1;
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x48);
  }
  return;
}
