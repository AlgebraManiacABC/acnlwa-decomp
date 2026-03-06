/**
 * FUN_002ed848.c
 * Source line: 385242
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002ed848(int param_1)

{
  undefined4 uVar1;
  
  FUN_002f6b14();
  FUN_002f6e14(param_1 + 0x4bc);
  FUN_002f6b14();
  FUN_002f6e14(param_1 + 0xa04);
  uVar1 = FUN_004b4fc0(param_1 + 0x270,"G_W_slct",1);
  FUN_00568630(param_1 + 0x270,param_1 + 0x3c4,uVar1,0);
  FUN_005697e0(0,param_1 + 0x3c4);
  *(undefined1 *)(param_1 + 0xce5) = 1;
  FUN_0058d3b4(0,0x10003c4);
  return;
}
