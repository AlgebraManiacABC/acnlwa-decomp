/**
 * FUN_0018bc84.c
 * Source line: 202322
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0018bc84(int *param_1)

{
  int iVar1;
  
  if ((DAT_0094f310 != 0) &&
     (iVar1 = (**(code **)(*(int *)(DAT_0094f310 + 0x71c) + 0x68))(DAT_0094f310 + 0x71c), iVar1 != 0
     )) {
          // WARNING: Could not recover jumptable at 0x0018bcd8. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x98))(param_1,5,0,0);
    return;
  }
  return;
}
