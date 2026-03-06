/**
 * FUN_00328aa4.c
 * Source line: 428907
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00328aa4(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x94];
  if (piVar1 != param_1 && piVar1 != NULL) {
          // WARNING: Could not recover jumptable at 0x00328ad4. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*piVar1 + 0x34))(piVar1);
    return;
  }
  FUN_002fb94c(param_1[0x3c]);
  return;
}
