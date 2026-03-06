/**
 * FUN_00747288.c
 * Source line: 1103287
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00747288(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (iRam00974a64 == 0) {
    puVar1 = (undefined4 *)0x953678;
  }
  else {
    puVar1 = (undefined4 *)(iRam00974a64 + 0x74);
  }
  uVar2 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  return;
}
