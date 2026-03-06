/**
 * FUN_006049ac.c
 * Source line: 920441
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_006049ac(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = ranqd2_ranged_int_from_seed_2(0x32);
  *(int *)(param_1 + 0x1d70) = iVar1 + 10;
  fVar2 = (float)ranqd2_ranged_from_seed_2(0x42480000);
  *(uint *)(param_1 + 0x1d74) = (uint)(0.0 < fVar2 + 10.0) * (int)(fVar2 + 10.0);
  *(undefined4 *)(param_1 + 0x1d78) = 0;
  *(undefined4 *)(param_1 + 0x1d7c) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x1d80) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x1d84) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1d88) = 0;
  FUN_006e9c2c(0x40c00000,param_1 + 0x78);
  return;
}
