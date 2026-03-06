/**
 * FUN_006aecfc.c
 * Source line: 1008703
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_006aecfc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004b4fc0(param_1 + 0x4bc,"G_change_00",1);
  FUN_00568630(param_1 + 0x4bc,param_1 + 0x6a8,uVar1,0);
  FUN_005697e0(0,param_1 + 0x6a8);
  uVar1 = FUN_004b4fc0(param_1 + 0x798,"G_change_00",1);
  FUN_00568630(param_1 + 0x798,param_1 + 0x984,uVar1,0);
  FUN_005697e0(0,param_1 + 0x984);
  DAT_0094fd58 |= 0x800;
  FUN_0058d3b4(0,0x100041e);
  *(byte *)(*(int *)(param_1 + 0x633c) + 0xb7) = *(byte *)(*(int *)(param_1 + 0x633c) + 0xb7) & 0xfe
  ;
  return;
}
