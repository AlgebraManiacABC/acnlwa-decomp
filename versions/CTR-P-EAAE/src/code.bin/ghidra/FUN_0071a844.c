/**
 * FUN_0071a844.c
 * Source line: 1073169
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined * FUN_0071a844(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_0030bb10(param_1 + 0x1c);
  if (iVar1 == 0) {
    puVar2 = &DAT_0095bfdc;
  }
  else {
    puVar2 = (undefined *)(param_1 + 0x1c);
  }
  return puVar2;
}
