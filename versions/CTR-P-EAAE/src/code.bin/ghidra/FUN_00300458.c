/**
 * FUN_00300458.c
 * Source line: 398264
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00300458(undefined2 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar1 = (undefined4 *)FUN_002fb378();
  local_1c = *puVar1;
  local_18 = puVar1[1];
  local_14 = puVar1[2];
  if (param_2 != 0) {
    FUN_00312ab8(&local_1c,0,0xfffffffa,0,0);
  }
  *param_1 = (short)local_1c;
  *(undefined1 *)(param_1 + 1) = (undefined1)local_18;
  *(undefined1 *)((int)param_1 + 3) = local_18._1_1_;
  return;
}
