/**
 * FUN_0071a578.c
 * Source line: 1072964
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined * FUN_0071a578(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_0076ab28(param_1 + 0xc);
  if (iVar1 == 3) {
    puVar2 = (undefined *)(param_1 + 0xc);
  }
  else {
    puVar2 = &DAT_0095bfdc;
  }
  return puVar2;
}
