/**
 * FUN_003d1fbc.c
 * Source line: 543581
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_003d1fbc(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008feab0;
  if (param_1[0xd] != 0) {
    (**(code **)(**(int **)(param_1[0xd] + 4) + 0x40))();
  }
  iVar1 = FUN_00354800(param_1);
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x003d2000. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
