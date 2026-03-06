/**
 * FUN_0053fcdc.c
 * Source line: 784374
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0053fcdc(int param_1,undefined4 *param_2)

{
  int iVar1;
  int local_20 [2];
  undefined4 local_18 [2];
  
  FUN_001277dc(0x208,local_20);
  iVar1 = local_20[0];
  local_18[0] = 0xff;
  FUN_005601b8(*param_2,param_2[1],param_2[2],param_2[3],local_18);
  *(char *)(param_1 + 0x3b) = (char)((uint)local_18[0] >> 0x18);
  *(char *)(param_1 + 0x3c) = (char)((uint)local_18[0] >> 0x10);
  *(char *)(param_1 + 0x3d) = (char)((uint)local_18[0] >> 8);
  *(char *)(param_1 + 0x3e) = (char)local_18[0];
  local_20[0] = FUN_0012d5bc(param_1 + 0x34,local_20[0],1);
  FUN_001279b4(local_20[0] - iVar1 & 0xfffffffc);
  return;
}
