/**
 * FUN_00124130.c
 * Source line: 126075
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00124130(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_20 = FUN_00129928();
  local_20 *= 1000000;
  local_18 = uRam00974ed8;
  uStack_14 = uRam00974edc;
  puVar1 = (undefined4 *)FUN_00129708(&local_18,&local_20);
  uVar2 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  return;
}
