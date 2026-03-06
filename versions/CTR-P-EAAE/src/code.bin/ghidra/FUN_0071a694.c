/**
 * FUN_0071a694.c
 * Source line: 1073049
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined * FUN_0071a694(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_0076ab28(param_1 + 0x14);
  if (iVar1 == 5) {
    puVar2 = (undefined *)(param_1 + 0x14);
  }
  else {
    puVar2 = &DAT_0095bfdc;
  }
  return puVar2;
}
