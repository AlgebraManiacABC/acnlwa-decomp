/**
 * FUN_0055cb58.c
 * Source line: 802660
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_0055cb58(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1[1];
  uVar2 = param_1[3];
  uVar3 = param_1[2];
  uVar1 = *param_1 ^ *param_1 << 0xb;
  uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
  param_1[3] = uVar1;
  param_1[2] = uVar2;
  param_1[1] = uVar3;
  *param_1 = uVar4;
  return uVar1;
}
