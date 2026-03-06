/**
 * FUN_006f57bc.c
 * Source line: 1051514
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_006f57bc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x3e0);
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(param_1 + 0x26c,"G_inout",1);
    FUN_00568984(param_1 + 0x26c,param_1 + 0x3e0,uVar2,0);
    FUN_0081bd88(param_1,&UNK_006f56b4,0);
    return;
  }
  FUN_00569544(param_1 + 0x3e0);
  return;
}
