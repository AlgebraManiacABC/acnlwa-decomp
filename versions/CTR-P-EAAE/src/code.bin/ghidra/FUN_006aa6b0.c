/**
 * FUN_006aa6b0.c
 * Source line: 1006104
 * Body lines: 15
 */
#include "../../../include/types.h"

FUN_006aa6b0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined1 auStack_28 [12];
  
  iVar1 = 0;
  do {
    (**(code **)(*(int *)(param_1 + iVar1 * 0xc) + 0x1c))(param_1 + iVar1 * 0xc);
    iVar1 += 1;
  } while (iVar1 < 8);
  FUN_006a9f58(param_1,param_2,param_4,*(undefined4 *)(param_3 + 4));
  FUN_006a9d04(param_1,param_2,param_3,param_5);
  FUN_00758d94(auStack_28,param_2);
  iVar1 = FUN_0075b810(auStack_28);
  if (iVar1 == 0) {
    (**(code **)(*(int *)(param_1 + 0x54) + 0x14))(param_1 + 0x54,auStack_28);
  }
  return auStack_28;
}
