/**
 * FUN_0026e8f0.c
 * Source line: 317060
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0026e8f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x840);
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(param_1 + 0x170,"G_chara",1);
    FUN_00568984(param_1 + 0x24,param_1 + 0x840,uVar2,0);
    FUN_0026e478(param_1);
    FUN_00817bd0(param_1,FUN_0026e968,0);
    return;
  }
  FUN_00569544(param_1 + 0x840);
  *(undefined1 *)(param_1 + 0x146) = 1;
  return;
}
