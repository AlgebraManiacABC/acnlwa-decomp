/**
 * FUN_0026e968.c
 * Source line: 317081
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0026e968(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0();
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(param_1 + 0x170,"G_chara",1);
    FUN_00568984(param_1 + 0x24,param_1 + 0x868,uVar2,0);
    FUN_00817bd0(param_1,&UNK_0029b6ec,0);
    return;
  }
  FUN_00569544(param_1 + 0x868);
  *(undefined1 *)(param_1 + 0x146) = 1;
  return;
}
