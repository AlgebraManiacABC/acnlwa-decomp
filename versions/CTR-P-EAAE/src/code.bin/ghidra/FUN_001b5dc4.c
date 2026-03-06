/**
 * FUN_001b5dc4.c
 * Source line: 221806
 * Body lines: 6
 */
#include "../../../include/types.h"

int FUN_001b5dc4(float param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = FUN_00303660();
  fVar2 = (float)ranqd2_ranged_from_seed_2(param_1 - param_2);
  fVar2 = (float)uVar1 * (fVar2 + param_2) + 0.99999;
  return (uint)(0.0 < fVar2) * (int)fVar2;
}
