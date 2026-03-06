/**
 * FUN_0071a88c.c
 * Source line: 1073205
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined * FUN_0071a88c(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_0076ab28(param_1 + 0x18);
  if (iVar1 == 6) {
    puVar2 = (undefined *)(param_1 + 0x18);
  }
  else {
    puVar2 = &DAT_0095bfdc;
  }
  return puVar2;
}
