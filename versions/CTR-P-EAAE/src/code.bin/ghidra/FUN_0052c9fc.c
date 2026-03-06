/**
 * FUN_0052c9fc.c
 * Source line: 771737
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0052c9fc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_003170f8(0);
  if ((iVar1 != 0) || (iVar1 = FUN_003170f8(3,0), uVar2 = 0, iVar1 != 0)) {
    if (*(char *)(DAT_009516ac + 0x1a) == '\x05') {
      uVar2 = 1;
      *(undefined1 *)(DAT_009516ac + 0x1a) = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
