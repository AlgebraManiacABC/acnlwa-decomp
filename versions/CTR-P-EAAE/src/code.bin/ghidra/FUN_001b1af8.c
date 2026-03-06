/**
 * FUN_001b1af8.c
 * Source line: 219488
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001b1af8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = ranqd2_ranged_int_from_seed_2(0x18);
    *(undefined *)(param_1 + uVar2) = (&UNK_0088e784)[iVar1];
    uVar2 += 1;
  } while (uVar2 < 3);
  return;
}
