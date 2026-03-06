/**
 * FUN_0035edc4.c
 * Source line: 464081
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0035edc4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (((*(ushort *)(param_2 + 0xa2) & 0xf) != 1) || (iVar1 = FUN_0035f208(param_1), iVar1 != 0)) {
    lVar2 = _ll_sdiv(CONCAT44(iRam0096ba8c -
                              (*(int *)(param_1 + 0x2c) +
                              (uint)(uRam0096ba88 < *(uint *)(param_1 + 0x28))),
                              uRam0096ba88 - *(uint *)(param_1 + 0x28)),1000);
    *(int *)(param_2 + 0xb8) = (int)lVar2 + *(int *)(param_1 + 0x30);
    FUN_0035ee44(param_1,param_2,param_3,param_1 + 0xc,*(undefined4 *)(param_1 + 8));
  }
  return;
}
