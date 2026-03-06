/**
 * FUN_00608e34.c
 * Source line: 922324
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00608e34(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0075cd5c(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18));
  if (iVar1 != 0) {
    FUN_006021d0(*(undefined4 *)(DAT_0095deac + 0x14));
    uVar2 = FUN_00584134();
    FUN_0058c5f0(uVar2,0x24);
    FUN_0081c0a0(param_1);
  }
  return;
}
