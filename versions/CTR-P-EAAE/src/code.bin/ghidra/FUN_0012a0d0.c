/**
 * FUN_0012a0d0.c
 * Source line: 131347
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0012a0d0(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = iRam0097d8bc;
  uVar2 = 0;
  if (param_2 < 7) {
    FUN_00135748(iRam0097d8bc);
    iVar3 = iVar1 + param_2 * 4;
    uVar2 = *(undefined4 *)(iVar3 + 0x10);
    *(undefined4 *)(iVar3 + 0x10) = param_1;
    FUN_001357ec(iVar1);
  }
  return uVar2;
}
