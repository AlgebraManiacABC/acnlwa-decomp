/**
 * FUN_006c2d60.c
 * Source line: 1022352
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_006c2d60(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005d4608(*(undefined4 *)(param_1 + 0x648),*(undefined4 *)(param_1 + 0x654),
                       uRam0095c550,uRam0095c554);
  *(undefined4 *)(param_1 + 0x6d4) = uVar1;
  *(short *)(param_1 + 0x6d8) = (short)uRam0095c554;
  if ((*(int *)(param_1 + 0x6e8) != 0) &&
     (*(int *)(param_1 + 0x6ec) == *(int *)(*(int *)(param_1 + 0x6e8) + 0xc))) {
    FUN_002e6368(param_1 + 0x6dc);
    return;
  }
  return;
}
