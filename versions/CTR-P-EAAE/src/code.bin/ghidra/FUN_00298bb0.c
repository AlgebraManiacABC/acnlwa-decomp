/**
 * FUN_00298bb0.c
 * Source line: 338964
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00298bb0(int param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  FUN_00148710(&local_10,*(int *)(param_1 + 0x764) + 0x80);
  iVar1 = FUN_006d1e64();
  iVar1 = *(int *)(iVar1 + 500);
  *(undefined4 *)(iVar1 + 0x4c0) = local_10;
  *(undefined4 *)(iVar1 + 0x4c4) = local_c;
  iVar1 = FUN_006d1e64();
  FUN_001f99e4(*(undefined4 *)(iVar1 + 500),&local_10);
  return;
}
