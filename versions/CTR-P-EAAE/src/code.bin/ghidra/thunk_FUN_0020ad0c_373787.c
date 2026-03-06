/**
 * thunk_FUN_0020ad0c.c
 * Source line: 373787
 * Body lines: 11
 */
#include "../../../include/types.h"

void thunk_FUN_0020ad0c(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = GET_BYTE_00957322();
  if (iVar1 == 0x5e) {
    param_2 = 0;
  }
  if (*(char *)((int)param_1 + 0x35) != param_2) {
    *(char *)((int)param_1 + 0x35) = (char)param_2;
          // WARNING: Could not recover jumptable at 0x0020ad44. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x18))(param_1);
    return;
  }
  return;
}
