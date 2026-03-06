/**
 * FUN_001bfd18.c
 * Source line: 226943
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_001bfd18(int *param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined1 *)((int)param_1 + 0x275)) {
  case 0:
          // WARNING: Could not recover jumptable at 0x001bfd3c. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x1a4))();
    return uVar1;
  case 1:
          // WARNING: Could not recover jumptable at 0x001bfd48. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x1cc))();
    return uVar1;
  case 2:
          // WARNING: Could not recover jumptable at 0x001bfd54. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 500))();
    return uVar1;
  default:
    return 0;
  }
}
