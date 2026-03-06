/**
 * FUN_0068f270.c
 * Source line: 995224
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0068f270(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00950874;
  if (DAT_00950874 != 0) {
    if (*(char *)(DAT_00950874 + 0xf2) == '\x16') {
      *(undefined4 *)(DAT_00950874 + 0x114) = *param_1;
      *(undefined4 *)(iVar1 + 0x118) = param_1[1];
      *(undefined4 *)(iVar1 + 0x11c) = param_1[2];
    }
    return;
  }
  return;
}
