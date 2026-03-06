/**
 * FUN_004b9bbc.c
 * Source line: 697097
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_004b9bbc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x678);
  FUN_004d7efc();
          // WARNING: Could not recover jumptable at 0x004b9be8. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*piRam0097513c + 0xc))(piRam0097513c,uVar1);
  return;
}
