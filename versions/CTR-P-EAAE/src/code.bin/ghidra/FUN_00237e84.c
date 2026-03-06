/**
 * FUN_00237e84.c
 * Source line: 289334
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00237e84(int param_1)

{
  int iVar1;
  undefined4 unaff_lr;
  
  FUN_00303fb4(param_1 + 0xb06,0xf,1);
  FUN_005c121c();
  iVar1 = *(int *)(param_1 + 0x660);
  if (*(int *)(iVar1 + 0x158) != 0) {
    return 0;
  }
  *(undefined **)(iVar1 + 0x158) = &DAT_00a84380;
  *(int *)(iVar1 + 0x15c) = iVar1;
  FUN_006ea834(0,0x40c00000,*(int *)(iVar1 + 0xf0) + 0x78,0,0x134,2,0,unaff_lr);
  return 1;
}
