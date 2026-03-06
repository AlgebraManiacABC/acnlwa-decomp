/**
 * FUN_004fa7cc.c
 * Source line: 743204
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004fa7cc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004fe968(param_1,2);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 4;
    *(undefined1 *)(param_1 + 0x208) = 0;
  }
  return;
}
