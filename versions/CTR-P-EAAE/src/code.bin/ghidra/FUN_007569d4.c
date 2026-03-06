/**
 * FUN_007569d4.c
 * Source line: 1112143
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_007569d4(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_002fb430(&local_14,param_1);
  local_20 = local_14;
  local_1c = uStack_10;
  uStack_18 = uStack_c;
  FUN_0056cc38(&local_20,1);
  puVar1 = (undefined4 *)FUN_002fb378();
  FUN_002fb4a0(*puVar1,puVar1[1],puVar1[2],local_20,local_1c,uStack_18);
  return;
}
