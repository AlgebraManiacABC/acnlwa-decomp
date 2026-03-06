/**
 * FUN_0072fd24.c
 * Source line: 1086726
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0072fd24(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0072f1d8(iRam00974a58);
  if (iVar1 == 0) {
    uVar2 = 0x10;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(iRam00974a58 + 0x18) + 0x38);
  }
  return uVar2;
}
