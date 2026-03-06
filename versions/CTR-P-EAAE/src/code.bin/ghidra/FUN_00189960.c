/**
 * FUN_00189960.c
 * Source line: 201430
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00189960(int param_1)

{
  int iVar1;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  
  local_1c = 0;
  local_1a = 0;
  local_18 = 0;
  iVar1 = FUN_0057b9dc(0xa8,param_1,0,param_1 + 0x14,&local_1c);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x6c) = *(byte *)(iVar1 + 0x6c) & 0xfb | 2;
    *(undefined4 *)(iVar1 + 0x70) = 0x42400000;
    *(undefined2 *)(iVar1 + 0x74) = 0x2000;
    *(undefined4 *)(iVar1 + 0x5c) = 0x45100000;
  }
  return;
}
