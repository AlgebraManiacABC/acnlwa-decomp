/**
 * FUN_00138c2c.c
 * Source line: 145380
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00138c2c(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_2 < 6) && (iVar2 = *(int *)(param_1 + param_2 * 4 + 0x14), iVar2 != 0)) {
    FUN_00135748(iVar2 + 4);
    uVar1 = FUN_00138f30(iVar2 + 0x10);
    FUN_001357ec(iVar2 + 4);
    return uVar1;
  }
  return 0xffffffff;
}
