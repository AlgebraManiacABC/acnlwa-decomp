/**
 * FUN_002f2cfc.c
 * Source line: 387051
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002f2cfc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x3cc);
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(param_1 + 0x280,"G_inout_00",1);
    FUN_00568984(param_1 + 0x280,param_1 + 0x3cc,uVar2,0);
    FUN_00819a14(param_1 + 0x14,&UNK_002f2eb4,0);
    return;
  }
  FUN_00569544(param_1 + 0x3cc);
  return;
}
