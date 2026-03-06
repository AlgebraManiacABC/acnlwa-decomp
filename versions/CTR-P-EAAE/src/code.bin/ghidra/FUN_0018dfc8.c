/**
 * FUN_0018dfc8.c
 * Source line: 203337
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0018dfc8(int *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = *param_1;
  iVar2 = ranqd2_ranged_int_from_seed_2(0x32);
  param_1[1] = iVar2 + 10;
  fVar3 = (float)ranqd2_ranged_from_seed_2(0x42480000);
  param_1[2] = (uint)(0.0 < fVar3 + 10.0) * (int)(fVar3 + 10.0);
  param_1[3] = 0;
  iVar2 = *param_1;
  param_1[4] = *(int *)(iVar2 + 0x14);
  param_1[5] = *(int *)(iVar2 + 0x18);
  param_1[6] = *(int *)(iVar2 + 0x1c);
  FUN_006e9c2c(0x40c00000,iVar1 + 0x78,0);
  return;
}
