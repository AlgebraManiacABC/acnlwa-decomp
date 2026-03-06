/**
 * FUN_002ed964.c
 * Source line: 385281
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_002ed964(int param_1)

{
  undefined4 uVar1;
  
  *(uint *)(param_1 + 0x590) = *(uint *)(param_1 + 0x590) | 8;
  *(uint *)(param_1 + 0xad8) = *(uint *)(param_1 + 0xad8) | 8;
  uVar1 = FUN_004b4fc0(param_1 + 0x270,"G_W_slct",1);
  FUN_00568630(param_1 + 0x270,param_1 + 0x3ec,uVar1,0);
  FUN_005697e0(0,param_1 + 0x3ec);
  return;
}
