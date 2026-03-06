/**
 * FUN_00273b30.c
 * Source line: 320179
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00273b30(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  param_2 -= *(int *)(param_1 + 0x2be8);
  if (*(char *)(param_1 + 0x2bf1) != '\0') {
    FUN_002fb918();
    iVar1 = FUN_001df3d4();
    if (iVar1 != 0) {
      uVar2 = FUN_006f51f8(iVar1,param_2);
      *(undefined4 *)(param_1 + param_2 * 0x2b4 + 0x1250) = uVar2;
    }
  }
  FUN_002e3568(param_1 + param_2 * 0x2b4 + 4000);
  return;
}
