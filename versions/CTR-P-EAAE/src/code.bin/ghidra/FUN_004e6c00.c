/**
 * FUN_004e6c00.c
 * Source line: 729488
 * Body lines: 9
 */
#include "../../../include/types.h"

Item_t * FUN_004e6c00(undefined4 param_1,ushort *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  Item_t IStack_10;
  
  puVar1 = (undefined4 *)Item_Clear(&IStack_10);
  *puVar1 = *(undefined4 *)(param_2 + 1);
  uVar2 = (uint)*param_2;
  FUN_004e6f74(param_1,uVar2 & 0xf,(uVar2 << 0x18) >> 0x1c,(uVar2 << 0x17) >> 0x1f,
               (uVar2 & 0x200) >> 9,&IStack_10,(uVar2 & 0x400) >> 10,0);
  return &IStack_10;
}
