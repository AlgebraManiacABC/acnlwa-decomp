/**
 * FUN_001eb8f8.c
 * Source line: 252181
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_001eb8f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined1 local_10;
  undefined3 uStack_f;
  
  _local_10 = CONCAT31((int3)((uint)param_4 >> 8),*(undefined1 *)(param_1 + 0x119));
  FUN_0071f798(&local_10,param_1 + 0x48);
  uVar1 = FUN_00711bf4(param_1);
  *(undefined2 *)(param_1 + 0x1ca) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x1cc) = 0x5b0;
  *(undefined4 *)(param_1 + 0x1b0) = 0x3f99999a;
  *(undefined4 *)(param_1 + 0x1b4) = 0x3ca3d70a;
  *(undefined1 *)(param_1 + 0x202) = 0;
  *(undefined1 *)(param_1 + 0x1ce) = 1;
  FUN_0027d790(param_1,*(undefined4 *)(param_1 + 400));
  return;
}
