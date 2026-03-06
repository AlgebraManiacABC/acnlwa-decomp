/**
 * FUN_001005c0.c
 * Source line: 103658
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_001005c0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [8];
  
  uVar2 = FUN_002f6e64(auStack_10,"ParticleHandleHeap");
  uVar2 = FUN_002f70b4(0x18,0x10,uVar2,4,param_1,0);
  iVar1 = DAT_00100604;
  *(undefined4 *)(DAT_00100604 + 0x34) = uVar2;
  FUN_002f6e8c(auStack_10);
  return *(undefined4 *)(iVar1 + 0x34);
}
