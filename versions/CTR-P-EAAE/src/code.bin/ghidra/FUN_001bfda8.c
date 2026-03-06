/**
 * FUN_001bfda8.c
 * Source line: 226999
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_001bfda8(int *param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined1 *)((int)param_1 + 0x275)) {
  case 0:
          // WARNING: Could not recover jumptable at 0x001bfdcc. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x1ac))();
    return uVar1;
  case 1:
          // WARNING: Could not recover jumptable at 0x001bfdd8. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x1d4))();
    return uVar1;
  case 2:
          // WARNING: Could not recover jumptable at 0x001bfde4. Too many branches
          // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x1fc))();
    return uVar1;
  default:
    return 0;
  }
}
