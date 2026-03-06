/**
 * FUN_00379a94.c
 * Source line: 483874
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00379a94(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_003d743c();
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  *(undefined4 *)(param_1 + 0x94) = param_2;
          // WARNING: Could not recover jumptable at 0x00379acc. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*piVar2 + 0xc))(piVar2);
  return;
}
