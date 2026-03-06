/**
 * FUN_001bfbb0.c
 * Source line: 226803
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_001bfbb0(int *param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined1 *)((int)param_1 + 0x275)) {
  case 0:
          // WARNING: Could not recover jumptable at 0x001bfbd4. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 400))();
    return uVar1;
  case 1:
          // WARNING: Could not recover jumptable at 0x001bfbe0. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x1b8))();
    return uVar1;
  case 2:
          // WARNING: Could not recover jumptable at 0x001bfbec. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x1e0))();
    return uVar1;
  default:
    return 0;
  }
}
