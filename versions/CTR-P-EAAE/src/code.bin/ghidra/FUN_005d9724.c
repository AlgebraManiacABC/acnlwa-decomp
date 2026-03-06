/**
 * FUN_005d9724.c
 * Source line: 886805
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_005d9724(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  ushort local_18 [2];
  ushort local_14 [2];
  
  iVar1 = FUN_007559a0(param_3);
  FUN_00755a68(param_3,local_18,local_14);
  if (local_18[0] == 0 && local_14[0] == 0) {
    uVar2 = ranqd2_ranged_int_from_seed_2(iVar1);
  }
  else {
    iVar1 = ranqd2_ranged_int_from_seed_2((uint)local_18[0] + (uint)local_14[0]);
    uVar2 = (uint)((int)(uint)local_18[0] <= iVar1);
  }
  *param_2 = uVar2;
  return 1;
}
