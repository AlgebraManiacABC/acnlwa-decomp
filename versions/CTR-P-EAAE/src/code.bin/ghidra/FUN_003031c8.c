/**
 * FUN_003031c8.c
 * Source line: 400446
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined * FUN_003031c8(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_0076ab28(param_1 + 4);
  if (iVar1 == 2) {
    puVar2 = (undefined *)(param_1 + 4);
  }
  else {
    puVar2 = &DAT_0095bfdc;
  }
  return puVar2;
}
