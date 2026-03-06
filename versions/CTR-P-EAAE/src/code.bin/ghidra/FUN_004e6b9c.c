/**
 * FUN_004e6b9c.c
 * Source line: 729473
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined1 * FUN_004e6b9c(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined1 auStack_14 [8];
  
  FUN_006bba14(auStack_14,*param_2);
  uVar1 = (uint)*(ushort *)(param_2 + 1);
  FUN_004e5924(param_1,uVar1 & 0xf,(uVar1 << 0x18) >> 0x1c,(uVar1 << 0x17) >> 0x1f,
               (uVar1 & 0x200) >> 9,auStack_14,0);
  return auStack_14;
}
