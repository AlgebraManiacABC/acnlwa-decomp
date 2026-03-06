/**
 * FUN_0047f3a0.c
 * Source line: 651755
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0047f3a0(undefined4 param_1)

{
  int iVar1;
  char acStack_18 [4];
  undefined1 auStack_14 [8];
  
  FUN_0012a518(param_1);
  iVar1 = FUN_00480c50(0x114,0x11,auStack_14);
  FUN_0012ab78();
  if (-1 < iVar1) {
    FUN_0012a518();
    iVar1 = FUN_00480ce0(acStack_18);
    FUN_0012ab78();
    if ((-1 < iVar1) && (acStack_18[0] != '\0')) {
      return 1;
    }
  }
  return 0;
}
