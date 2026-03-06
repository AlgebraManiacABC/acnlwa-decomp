/**
 * FUN_0051d44c.c
 * Source line: 762184
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0051d44c(uint param_1,undefined1 param_2)

{
  int iVar1;
  
  if (9 < param_1) {
    return;
  }
  iVar1 = FUN_0030b6c4();
  if (iVar1 != 0) {
    if (param_1 * 0x50 != -0xa82c58) {
      *(undefined1 *)(param_1 * 0x50 + 0xa82ca6) = param_2;
    }
    return;
  }
  *(undefined1 *)(DAT_0095386c + param_1 + 0x84) = param_2;
  return;
}
