/**
 * FUN_004d6948.c
 * Source line: 718987
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_004d6948(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x25);
  uVar3 = *(undefined4 *)(param_1 + 0x244);
  *(uint *)(param_1 + 0x244) = uVar1 * 0x400000 - 0x100000 | 0xf02c1;
  *(undefined4 *)(param_1 + 0x240) = uVar3;
  *(undefined4 *)(param_1 + 0x238 + uVar1 * 0x10 + 0xc) = 0;
  iVar2 = uVar1 * 0x10 + 0x10;
  __rt_memcpy_w(param_2,param_1 + 0x238,iVar2);
  *(undefined1 *)(param_1 + 0x25) = 0;
  return iVar2 + param_2;
}
