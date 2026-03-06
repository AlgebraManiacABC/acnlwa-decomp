/**
 * FUN_002ba0a4.c
 * Source line: 356267
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_002ba0a4(int param_1)

{
  undefined4 uVar1;
  
  *(uint *)(param_1 + 0x5bc) = *(uint *)(param_1 + 0x5bc) | 8;
  uVar1 = FUN_004b4fc0(param_1 + 0x270,"G_name",1);
  FUN_00568630(param_1 + 0x270,param_1 + 0x458,uVar1,0);
  uVar1 = FUN_004b4fc0(param_1 + 0x270,"G_W_slct",1);
  FUN_00568630(param_1 + 0x270,param_1 + 0x480,uVar1,0);
  FUN_005697e0(0,param_1 + 0x458);
  FUN_005697e0(0,param_1 + 0x480);
  return;
}
