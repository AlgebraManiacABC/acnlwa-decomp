/**
 * FUN_0022499c.c
 * Source line: 279986
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0022499c(int param_1,undefined1 param_2)

{
  int iVar1;
  
  if (((uRam0094fc94 & 1) == 0) && (iVar1 = FUN_002fe7dc(0x94fc94), iVar1 != 0)) {
    iRam0094fc98 = FUN_0056878c(*(undefined4 *)(param_1 + 4),"N_All");
  }
  *(undefined1 *)(iRam0094fc98 + 0xb4) = param_2;
  return;
}
