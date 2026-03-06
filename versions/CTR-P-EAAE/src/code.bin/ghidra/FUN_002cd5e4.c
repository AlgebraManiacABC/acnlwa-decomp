/**
 * FUN_002cd5e4.c
 * Source line: 368034
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002cd5e4(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    FUN_002bef2c();
    FUN_002ffb64();
    *param_1 = 0;
    DAT_0095262c = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  iVar1 = FUN_00537464();
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0xa1) = 0;
  }
  return;
}
