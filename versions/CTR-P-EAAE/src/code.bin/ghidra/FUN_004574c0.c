/**
 * FUN_004574c0.c
 * Source line: 621412
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_004574c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x118) == '\0') {
    FUN_0045b7bc(param_1);
    uVar1 = *(undefined4 *)(iRam00974a74 + 0xc);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(iRam00974a74 + 8);
    *(undefined4 *)(param_1 + 0x114) = uVar1;
    uVar1 = 0;
    *(undefined1 *)(param_1 + 0x118) = 1;
  }
  else {
    uVar1 = 0xe0a14827;
  }
  return uVar1;
}
