/**
 * FUN_0065e040.c
 * Source line: 969500
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0065e040(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_006576f8();
  iVar1 = FUN_002fe8a8(param_1);
  if (iVar1 != 0) {
    FUN_0071a844(iVar1 + 10);
    iVar2 = FUN_003117bc();
    if (iVar2 == 0xe) {
      Item_Copy((Item_t *)(iVar1 + 0x26),(Item_t *)&DAT_0095bfdc);
      return;
    }
  }
  return;
}
