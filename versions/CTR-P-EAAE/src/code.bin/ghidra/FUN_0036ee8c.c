/**
 * FUN_0036ee8c.c
 * Source line: 476315
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0036ee8c(int *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 8))(param_1);
  cVar1 = (char)param_1[0xb];
  while (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x10))(param_1);
    cVar1 = (char)param_1[0xb];
  }
          // WARNING: Could not recover jumptable at 0x0036eedc. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0xc))(param_1);
  return;
}
