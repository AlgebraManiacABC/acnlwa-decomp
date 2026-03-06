/**
 * FUN_002eec98.c
 * Source line: 385646
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002eec98(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x7e0);
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(param_1 + 0x2e4,uRam0094f7dc,1);
    FUN_00568984(param_1 + 0x2e4,param_1 + 0x7e0,uVar2,0);
    FUN_002fae84();
    return;
  }
  FUN_00569544(param_1 + 0x7e0);
  return;
}
