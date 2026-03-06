/**
 * FUN_001bfcd0.c
 * Source line: 226915
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_001bfcd0(int *param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined1 *)((int)param_1 + 0x275)) {
  case 0:
          // WARNING: Could not recover jumptable at 0x001bfcf4. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x1a0))();
    return uVar1;
  case 1:
          // WARNING: Could not recover jumptable at 0x001bfd00. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x1c8))();
    return uVar1;
  case 2:
          // WARNING: Could not recover jumptable at 0x001bfd0c. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x1f0))();
    return uVar1;
  default:
    return 0;
  }
}
