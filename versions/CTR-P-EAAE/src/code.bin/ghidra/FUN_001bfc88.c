/**
 * FUN_001bfc88.c
 * Source line: 226887
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_001bfc88(int *param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined1 *)((int)param_1 + 0x275)) {
  case 0:
          // WARNING: Could not recover jumptable at 0x001bfcac. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x19c))();
    return uVar1;
  case 1:
          // WARNING: Could not recover jumptable at 0x001bfcb8. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x1c4))();
    return uVar1;
  case 2:
          // WARNING: Could not recover jumptable at 0x001bfcc4. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x1ec))();
    return uVar1;
  default:
    return 0;
  }
}
