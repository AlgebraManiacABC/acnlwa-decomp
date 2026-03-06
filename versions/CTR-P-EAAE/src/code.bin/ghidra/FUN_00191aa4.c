/**
 * FUN_00191aa4.c
 * Source line: 205433
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00191aa4(int param_1)

{
  undefined4 uVar1;
  
  DAT_0094fd58 &= 0xffffffdf;
  uVar1 = FUN_004b4fc0(param_1 + 0x4e8,"G_inout",1);
  FUN_00568630(param_1 + 0x4e8,param_1 + 0x65c,uVar1,0);
  FUN_005697e0(0,param_1 + 0x65c);
  *(uint *)(param_1 + 0x786c) = *(uint *)(param_1 + 0x786c) | 8;
  FUN_00299984(param_1 + 0x78ac,1);
  FUN_002f6d18();
  FUN_008195ec(param_1 + 0x6d5c,FUN_002e250c,0);
  if (*(char *)(param_1 + 0x78a8) == '\x01') {
    uVar1 = FUN_00584134();
    FUN_0058c5f0(uVar1,0x1e);
    *(undefined1 *)(param_1 + 0x78a8) = 0;
  }
  return;
}
