/**
 * FUN_002812b0.c
 * Source line: 327581
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002812b0(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_009506b4;
  if (DAT_009506b0 != -1) {
    iVar1 = 0;
  }
  if ((*(char *)(param_1 + 0x259b) == '\x01') && (iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0x6acd) = 0;
    *(undefined1 *)(param_1 + 0x259b) = 0;
  }
  return;
}
