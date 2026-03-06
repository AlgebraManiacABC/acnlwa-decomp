/**
 * FUN_005494ec.c
 * Source line: 790386
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_005494ec(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == NULL) {
    param_2 = (int *)FUN_003045a8(DAT_00975338);
  }
  if (param_3 == 0) {
    param_3 = (**(code **)(*param_2 + 0x40))(param_2,4);
  }
  uVar1 = (**(code **)(*param_2 + 0x18))(param_2,param_3,4);
  *param_1 = uVar1;
  return;
}
