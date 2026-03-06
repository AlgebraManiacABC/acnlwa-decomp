/**
 * FUN_0052cd1c.c
 * Source line: 771849
 * Body lines: 10
 */
#include "../../../include/types.h"

bool FUN_0052cd1c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 extraout_r3;
  
  iVar2 = FUN_003170f8(8,0,param_3,param_1);
  iVar1 = DAT_009516ac;
  if (iVar2 != 0) {
    *(undefined1 *)(DAT_009516ac + 0x1a) = 1;
    *(undefined1 *)(iVar1 + 0x1b) = extraout_r3;
  }
  return iVar2 != 0;
}
