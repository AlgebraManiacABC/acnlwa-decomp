/**
 * FUN_00315ac0.c
 * Source line: 417454
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00315ac0(int param_1)

{
  FUN_002cd30c();
  FUN_002ccc70(param_1 + 0x1250,0,1);
  *(uint *)(param_1 + 0xc08) = *(uint *)(param_1 + 0xc08) | 8;
  FUN_002f6b14();
  FUN_002f6e14(param_1 + 0xb34);
  return;
}
