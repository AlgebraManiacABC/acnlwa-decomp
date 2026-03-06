/**
 * FUN_001bfd60.c
 * Source line: 226971
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_001bfd60(int *param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined1 *)((int)param_1 + 0x275)) {
  case 0:
          // WARNING: Could not recover jumptable at 0x001bfd84. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x1a8))();
    return uVar1;
  case 1:
          // WARNING: Could not recover jumptable at 0x001bfd90. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x1d0))();
    return uVar1;
  case 2:
          // WARNING: Could not recover jumptable at 0x001bfd9c. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x1f8))();
    return uVar1;
  default:
    return 0;
  }
}
