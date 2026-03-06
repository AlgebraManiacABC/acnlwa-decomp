/**
 * FUN_001bfc40.c
 * Source line: 226859
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_001bfc40(int *param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined1 *)((int)param_1 + 0x275)) {
  case 0:
          // WARNING: Could not recover jumptable at 0x001bfc64. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x198))();
    return uVar1;
  case 1:
          // WARNING: Could not recover jumptable at 0x001bfc70. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x1c0))();
    return uVar1;
  case 2:
          // WARNING: Could not recover jumptable at 0x001bfc7c. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x1e8))();
    return uVar1;
  default:
    return 0;
  }
}
