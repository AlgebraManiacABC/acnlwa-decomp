/**
 * FUN_0067e398.c
 * Source line: 985773
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0067e398(int param_1)

{
  byte bVar1;
  undefined1 auStack_1c [4];
  undefined4 local_18;
  
  FUN_00759a54(auStack_1c,param_1 + 0x8ca);
  local_18 = FUN_006c6640(auStack_1c,0);
  bVar1 = *(byte *)(param_1 + 0x8ce);
  FUN_0068db1c(0,0x3f800000,0x41000000,0x40c00000,0x40c00000,param_1,0x123,0,0,0xf);
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    FUN_0066a398(param_1,auStack_1c,(uint)bVar1 << 8);
  }
  *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) & 0xef;
  FUN_0068dc14(param_1,0x100065c,0);
  return;
}
