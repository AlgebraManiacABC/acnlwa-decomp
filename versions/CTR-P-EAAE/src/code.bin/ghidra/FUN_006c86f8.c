/**
 * FUN_006c86f8.c
 * Source line: 1026137
 * Body lines: 12
 */
#include "../../../include/types.h"

bool FUN_006c86f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_006a6ec0(&local_18,&local_14,&local_10,&local_c,param_1,param_2);
  iVar1 = FUN_006c5ad8(local_18,local_14,local_10,local_c,param_3);
  return iVar1 == 0x11;
}
