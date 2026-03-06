/**
 * FUN_0032f2f4.c
 * Source line: 433207
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0032f2f4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0020714c();
  if ((iVar1 != 0) && (iVar1 = FUN_0020714c(), *(char *)(iVar1 + 0x22) != '\0')) {
    return 2;
  }
  iVar1 = FUN_0020714c();
  iVar1 = FUN_0054f994(*(undefined4 *)(iVar1 + 4),*(undefined1 *)(param_1 + 0x40));
  if ((iVar1 != 0) ||
     (iVar1 = FUN_0020714c(),
     *(int *)(*(int *)(iVar1 + 4) + (uint)*(byte *)(param_1 + 0x40) * 4 + 0x42c) != 0)) {
    FUN_004ee364(param_1 + 0x1c,0);
  }
  return 2;
}
