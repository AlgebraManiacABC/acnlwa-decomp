/**
 * FUN_006863fc.c
 * Source line: 989753
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_006863fc(int param_1)

{
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [12];
  short local_10;
  
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    FUN_0064dc88(0x41000000,param_1);
    FUN_00759a54(auStack_28,param_1 + 0x8cb);
    local_10 = (ushort)*(byte *)(param_1 + 0x8cf) << 8;
    FUN_0064ee94(uRam0094df04,auStack_1c,auStack_28,(uint)*(byte *)(param_1 + 0x8cf) << 8,1);
    FUN_007656b0(param_1,auStack_1c);
  }
  return;
}
