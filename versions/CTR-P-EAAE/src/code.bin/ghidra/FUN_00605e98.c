/**
 * FUN_00605e98.c
 * Source line: 921210
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00605e98(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int *piVar2;
  
  if (param_3 - 1U < 0xb) {
    param_3 *= 8;
    piVar2 = (int *)(param_1 + ((int)*(uint *)(&UNK_008460f4 + param_3) >> 1));
    if ((*(uint *)(&UNK_008460f4 + param_3) & 1) == 0) {
      pcVar1 = *(code **)(&UNK_008460f0 + param_3);
    }
    else {
      pcVar1 = *(code **)(*piVar2 + *(int *)(&UNK_008460f0 + param_3));
    }
    (*pcVar1)(piVar2);
  }
          // WARNING: Could not recover jumptable at 0x00605ef0. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 0x20) + 0x1c))(*(int **)(param_1 + 0x20),0);
  return;
}
