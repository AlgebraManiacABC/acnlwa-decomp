/**
 * FUN_001210d4.c
 * Source line: 123648
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_001210d4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_10;
  
  local_10 = param_4;
  FUN_001277dc(0x208,&local_10);
  iVar1 = local_10;
  local_10 = FUN_001262dc(param_1 + 0x68,local_10,1);
  FUN_001279b4(local_10 - iVar1 & 0xfffffffc);
  return;
}
