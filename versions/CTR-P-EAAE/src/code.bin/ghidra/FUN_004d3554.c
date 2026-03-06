/**
 * FUN_004d3554.c
 * Source line: 716446
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_004d3554(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004d449c(param_1 + 8);
  if ((iVar1 != 0) && (iVar1 = FUN_004cdf84(), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 300) = param_2;
    *(undefined4 *)(iVar1 + 0x134) = *(undefined4 *)(param_1 + 4);
  }
  return;
}
