/**
 * FUN_0034bfa8.c
 * Source line: 448567
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0034bfa8(int param_1,int param_2,int param_3)

{
  undefined4 unaff_lr;
  
  if (param_3 == 0) {
    software_interrupt(WaitSynchronization1);
    if (*(int *)(param_1 + 4) < 0) {
      FUN_0012f204();
    }
    (*(code *)&UNK_007b1ad8)(param_2,&UNK_007b1ad8,param_2,unaff_lr);
    return;
  }
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_0013e0ec(0xae0f64,param_2);
  return;
}
