/**
 * FUN_0077025c.c
 * Source line: 1133124
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_0077025c(byte *param_1,uint param_2,ItemID param_3)

{
  ItemID *pIVar1;
  undefined4 uVar2;
  
  if ((*param_1 == param_2) && (pIVar1 = FUN_005359fc((uint)*param_1), param_3 <= pIVar1[1])) {
    uVar2 = FUN_006b9b30(*param_1,*(undefined4 *)(param_1 + param_3 * 4 + 4));
    return uVar2;
  }
  return 0x7ffe;
}
