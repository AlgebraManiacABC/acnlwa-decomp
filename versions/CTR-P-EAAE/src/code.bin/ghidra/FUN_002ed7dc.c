/**
 * FUN_002ed7dc.c
 * Source line: 385223
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002ed7dc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x3c4);
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(param_1 + 0x270,"G_W_slct",1);
    FUN_00568984(param_1 + 0x270,param_1 + 0x3c4,uVar2,0);
    FUN_008196f4(param_1,FUN_002ed9c8,0);
    return;
  }
  FUN_00569544(param_1 + 0x3c4);
  return;
}
