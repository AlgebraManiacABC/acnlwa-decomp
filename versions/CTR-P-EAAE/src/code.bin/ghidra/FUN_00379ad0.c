/**
 * FUN_00379ad0.c
 * Source line: 483892
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00379ad0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_003d743c();
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  *(undefined4 *)(param_1 + 0x94) = 0;
          // WARNING: Could not recover jumptable at 0x00379b08. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*piVar2 + 0xc))(piVar2);
  return;
}
