/**
 * FUN_004525dc.c
 * Source line: 617782
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004525dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                 undefined4 param_5)

{
  int iVar1;
  uint local_18;
  
  local_18 = param_4;
  iVar1 = FUN_00736300(uRam00974a74,&local_18,param_2,param_3);
  if (-1 < iVar1) {
    FUN_004523d0(param_1,local_18 & 0xff,param_4,param_5);
  }
  return;
}
