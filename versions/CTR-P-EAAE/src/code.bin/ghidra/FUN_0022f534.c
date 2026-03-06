/**
 * FUN_0022f534.c
 * Source line: 284257
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0022f534(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00746f8c(&DAT_00a22020);
  if (((iVar1 == 0) || (uVar2 = FUN_00746efc(&DAT_00a22020), uVar2 < 2)) &&
     (iVar1 = FUN_0050d29c(&DAT_00a22020,0xa21d68,uRam00a21f68), iVar1 != 0)) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  }
  return;
}
