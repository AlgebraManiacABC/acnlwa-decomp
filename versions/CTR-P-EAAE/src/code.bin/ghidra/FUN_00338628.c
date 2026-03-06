/**
 * FUN_00338628.c
 * Source line: 437131
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00338628(int param_1)

{
  *(undefined4 *)(param_1 + 0x8aa8) = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x196c) + 0xc))();
  *(uint *)(param_1 + 4000) = *(uint *)(param_1 + 4000) & 0xfffffff7;
  FUN_002f6b14();
  FUN_002f6e14(param_1 + 0xecc);
  *(uint *)(param_1 + 0xc1c) = *(uint *)(param_1 + 0xc1c) & 0xfffffff7;
  FUN_002f6b14();
  FUN_002f6e14(param_1 + 0xb48);
  *(uint *)(param_1 + 0x1324) = *(uint *)(param_1 + 0x1324) & 0xfffffff7;
  FUN_002f6b14(param_1 + 0x1250);
  FUN_002f6e14(param_1 + 0x1250);
  return;
}
