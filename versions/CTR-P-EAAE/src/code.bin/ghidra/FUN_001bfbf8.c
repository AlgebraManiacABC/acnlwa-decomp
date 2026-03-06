/**
 * FUN_001bfbf8.c
 * Source line: 226831
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_001bfbf8(int *param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined1 *)((int)param_1 + 0x275)) {
  case 0:
          // WARNING: Could not recover jumptable at 0x001bfc1c. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x194))();
    return uVar1;
  case 1:
          // WARNING: Could not recover jumptable at 0x001bfc28. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x1bc))();
    return uVar1;
  case 2:
          // WARNING: Could not recover jumptable at 0x001bfc34. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x1e4))();
    return uVar1;
  default:
    return 0;
  }
}
