/**
 * FUN_006c56c8.c
 * Source line: 1024073
 * Body lines: 12
 */
#include "../../../include/types.h"

bool FUN_006c56c8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  local_14[0] = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_006a6ec0(&local_20,&local_1c,&local_18,local_14,param_1,param_2);
  iVar1 = FUN_006c5ad8(local_20,local_1c,local_18,local_14[0],param_3);
  return iVar1 == 0xf9;
}
