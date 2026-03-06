/**
 * FUN_0014897c.c
 * Source line: 161050
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0014897c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = (int)*(char *)((int)param_1 + 0x2a) & 0x1f;
  uVar2 = 0x1f - (int)*(char *)((int)param_1 + 0x2a);
  iVar3 = param_1[0xe];
  param_1[0x1c] =
       (((param_1[0x14] | 0x80000000U) >> uVar1 | (param_1[0x14] | 0x80000000U) << 0x20 - uVar1) >>
       (uVar2 & 0xff)) << (uVar2 & 0xff);
  param_1[0x1b] = *param_1 + param_1[0x15];
  param_1[0x1d] = iVar3 * 2;
  param_1[0x1e] = iVar3 * 3;
  param_1[0x1f] = iVar3 << 2;
  return;
}
