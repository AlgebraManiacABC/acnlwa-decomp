/**
 * FUN_00345bc4.c
 * Source line: 442767
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00345bc4(void)

{
  int iVar1;
  undefined4 local_14;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  
  iVar1 = FUN_007d24b8();
  if (iVar1 != 0) {
    local_14 = uRam00974f10;
    FUN_00348820(&local_14,auStack_c,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),0,
                 auStack_10,1,auStack_c,1);
  }
  return;
}
