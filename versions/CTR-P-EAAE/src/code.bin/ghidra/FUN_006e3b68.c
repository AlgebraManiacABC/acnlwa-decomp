/**
 * FUN_006e3b68.c
 * Source line: 1041695
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_006e3b68(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_1c [16];
  
  if ((*(int *)(param_1 + 0x2760) == 0) &&
     (((*(uint *)(param_1 + 0x2764) & 1) == 0 || (*(uint *)(param_1 + 0x2764) == 0)))) {
    puVar1 = (undefined4 *)FUN_003083bc(auStack_1c,param_1 + 0x27b0,9);
    *puVar1 = &DAT_0090aadc;
    FUN_005fcca4(puVar1,param_2);
    FUN_006e2820(param_1,FUN_004dd6ec,0,0xffff,0);
    *(undefined **)(param_1 + 0x2760) = &DAT_006e2720;
    *(undefined4 *)(param_1 + 0x2764) = 0;
    *(undefined4 *)(param_1 + 0x27a8) = 0;
    *(undefined1 *)(param_1 + 0x27c6) = 0;
    return 1;
  }
  return 0;
}
