/**
 * FUN_003763d0.c
 * Source line: 481157
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_003763d0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0035e304();
  FUN_003c222c(*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(param_1 + 0x84));
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x78) + 0x24) + 0x14);
          // WARNING: Could not recover jumptable at 0x00376404. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*piVar2 + 0x28))(piVar2,100);
  return;
}
