/**
 * FUN_0040d8a8.c
 * Source line: 576923
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0040d8a8(int param_1)

{
  int iVar1;
  
  iVar1 = iRam00974a48;
  if (((*(char *)(param_1 + 0x84) == '\0') || (*(int *)(iRam00974a48 + 8) != 0)) &&
     (*(int *)(iRam00974a48 + 0x10) != 0)) {
    if (*(char *)(param_1 + 0x84) != '\0') {
      *(undefined1 *)(param_1 + 0x101) = 0;
      FUN_00412eb0(iVar1,*(undefined4 *)(param_1 + 0x104));
    }
    return 1;
  }
  return 0;
}
