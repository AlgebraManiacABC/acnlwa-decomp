/**
 * FUN_00231758.c
 * Source line: 286141
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00231758(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  short local_14 [2];
  undefined1 auStack_10 [4];
  
  uVar1 = 0;
  FUN_00755a68(param_3,local_14,auStack_10);
  if (local_14[0] == 0) {
    if (*(int *)(param_1 + 0x158) == 0) {
      *(undefined **)(param_1 + 0x158) = &DAT_00a84374;
      *(int *)(param_1 + 0x15c) = param_1;
      FUN_006ea834(0,0x40c00000,*(int *)(param_1 + 0xf0) + 0x78,0,0x130,2,0);
    }
    FUN_005c2224();
    uVar1 = 1;
  }
  return uVar1;
}
