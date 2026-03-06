/**
 * FUN_0036a838.c
 * Source line: 472663
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0036a838(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[0x8b];
  *param_1 = &UNK_008fb858;
  if (piVar2 != NULL) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *param_1 = &UNK_008fc5f8;
  iVar1 = FUN_003cc49c(param_1 + 2);
  if (*(code **)(iVar1 + -0x10) != NULL) {
          // WARNING: Could not recover jumptable at 0x0036a888. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -0x10))();
    return;
  }
  FUN_002f83b0();
  return;
}
