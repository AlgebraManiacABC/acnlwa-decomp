/**
 * FUN_0070f010.c
 * Source line: 1066404
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined * FUN_0070f010(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_0076ab28(param_1 + 0x14);
  if (iVar1 == 6) {
    puVar2 = (undefined *)(param_1 + 0x14);
  }
  else {
    puVar2 = &DAT_0095bfdc;
  }
  return puVar2;
}
