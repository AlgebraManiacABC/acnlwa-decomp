/**
 * FUN_00694b54.c
 * Source line: 998680
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00694b54(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x612) = 0;
  *(undefined1 *)(param_1 + 0x611) = 0;
  *(undefined4 *)(param_1 + 0x614) = 0xffffffff;
  uVar1 = FUN_004b4fc0(param_1 + 0x280,"G_base_01",1);
  FUN_00568984(param_1 + 0x280,param_1 + 0x540,uVar1,0);
  uVar1 = FUN_004b4fc0(param_1 + 0x280,"G_base_01",1);
  FUN_00568984(param_1 + 0x280,param_1 + 0x568,uVar1,0);
  *(undefined4 *)(param_1 + 0x614) = 0xffffffff;
  FUN_0081b218(param_1 + 0x14,FUN_00694bdc,0);
  return;
}
