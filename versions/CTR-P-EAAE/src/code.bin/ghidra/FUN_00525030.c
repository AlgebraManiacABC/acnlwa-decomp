/**
 * FUN_00525030.c
 * Source line: 767561
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00525030(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x160;
  iVar1 = FUN_006cb9fc();
  if (iVar1 == 0) {
    uVar2 = 0x161;
  }
  if ((*(int *)(param_1 + 4) != 0) && (iVar1 = FUN_00317148(*(int *)(param_1 + 4),0), iVar1 != 0)) {
    FUN_0057bd8c(iVar1,uVar2);
    return;
  }
  return;
}
