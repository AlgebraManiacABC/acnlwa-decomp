/**
 * FUN_001b48dc.c
 * Source line: 221085
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_001b48dc(int param_1,undefined4 param_2,astruct_7 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_002fe940(param_1 + 0x2a);
  if (iVar1 != 0) {
    astruct_7_Copy((astruct_7 *)(param_1 + 0x40),param_3);
    return;
  }
  return;
}
