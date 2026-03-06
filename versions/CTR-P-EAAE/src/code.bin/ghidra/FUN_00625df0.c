/**
 * FUN_00625df0.c
 * Source line: 939670
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00625df0(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == NULL) {
    return;
  }
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = (**(code **)(*param_2 + 0x18))(param_2,5,4);
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  return;
}
