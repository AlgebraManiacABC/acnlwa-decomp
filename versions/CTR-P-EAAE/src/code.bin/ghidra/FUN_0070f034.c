/**
 * FUN_0070f034.c
 * Source line: 1066422
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined * FUN_0070f034(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_0076ab28(param_1 + 0x10);
  if (iVar1 == 5) {
    puVar2 = (undefined *)(param_1 + 0x10);
  }
  else {
    puVar2 = &DAT_0095bfdc;
  }
  return puVar2;
}
