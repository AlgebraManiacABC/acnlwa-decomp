/**
 * FUN_0055cabc.c
 * Source line: 802622
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0055cabc(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_2 ^ param_2 >> 0x1e) * 0x6c078965 + 1;
  uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  param_1[2] = uVar1;
  param_1[3] = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  return;
}
