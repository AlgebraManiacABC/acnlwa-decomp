/**
 * FUN_006af49c.c
 * Source line: 1009016
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_006af49c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004b4fc0(param_1 + 0x4bc,"G_change_00",1);
  FUN_00568630(param_1 + 0x4bc,param_1 + 0x6d0,uVar1,0);
  FUN_005697e0(0,param_1 + 0x6d0);
  uVar1 = FUN_004b4fc0(param_1 + 0x798,"G_change_00",1);
  FUN_00568630(param_1 + 0x798,param_1 + 0x95c,uVar1,0);
  FUN_005697e0(0,param_1 + 0x95c);
  FUN_006adc30(param_1);
  DAT_0094fd58 |= 0x800;
  FUN_0058d3b4(0,0x1000420);
  return;
}
