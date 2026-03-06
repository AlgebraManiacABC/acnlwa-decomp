/**
 * FUN_006048ac.c
 * Source line: 920381
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_006048ac(int *param_1,undefined4 param_2)

{
  undefined4 local_8;
  
  local_8 &= 0xffff0000;
          // WARNING: Could not recover jumptable at 0x006048d0. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0xb8))(param_1,0,param_2,local_8);
  return;
}
