/**
 * FUN_0067209c.c
 * Source line: 979695
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0067209c(int param_1)

{
  short sVar1;
  undefined4 local_1c [2];
  undefined4 local_14;
  
  FUN_00759ab0(local_1c,param_1 + 0x8ca);
  sVar1 = (ushort)*(byte *)(param_1 + 0x8ce) << 8;
  *(undefined4 *)(param_1 + 0x20) = local_1c[0];
  *(undefined4 *)(param_1 + 0x28) = local_14;
  *(undefined4 *)(param_1 + 0x14) = local_1c[0];
  *(undefined4 *)(param_1 + 0x1c) = local_14;
  *(short *)(param_1 + 0x2e) = sVar1;
  *(short *)(param_1 + 0x34) = sVar1;
  return;
}
