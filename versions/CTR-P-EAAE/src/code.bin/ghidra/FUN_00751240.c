/**
 * FUN_00751240.c
 * Source line: 1107532
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00751240(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((*(byte *)(param_1 + 0x7b4) < 2) && (*(byte *)(param_1 + 0x7b4) != 0)) ||
      (*(ItemParam_t **)(param_1 + 0x5f0) == NULL)) ||
     (iVar1 = FUN_0074870c(*(ItemParam_t **)(param_1 + 0x5f0)), uVar2 = 1, iVar1 != 1)) {
    uVar2 = 0;
  }
  return uVar2;
}
