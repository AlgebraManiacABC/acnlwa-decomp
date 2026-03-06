/**
 * FUN_006f56ec.c
 * Source line: 1051478
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_006f56ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x3b8);
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(param_1 + 0x26c,"G_inout",1);
    FUN_00568984(param_1 + 0x26c,param_1 + 0x3b8,uVar2,0);
    *(uint *)(param_1 + 0xe30) = *(uint *)(param_1 + 0xe30) & 0xfffffff7;
    FUN_0081bd88(param_1,FUN_006f58a0,0);
    return;
  }
  FUN_00569544(param_1 + 0x3b8);
  return;
}
