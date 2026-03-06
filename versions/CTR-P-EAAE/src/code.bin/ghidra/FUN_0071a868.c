/**
 * FUN_0071a868.c
 * Source line: 1073187
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined * FUN_0071a868(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_0076ab28(param_1 + 8);
  if (iVar1 == 3) {
    puVar2 = (undefined *)(param_1 + 8);
  }
  else {
    puVar2 = &DAT_0095bfdc;
  }
  return puVar2;
}
