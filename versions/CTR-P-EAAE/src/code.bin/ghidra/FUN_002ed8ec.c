/**
 * FUN_002ed8ec.c
 * Source line: 385261
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002ed8ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x3ec);
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(param_1 + 0x270,"G_W_slct",1);
    FUN_00568984(param_1 + 0x270,param_1 + 0x3ec,uVar2,0);
    *(undefined1 *)(param_1 + 0xce5) = 0;
    FUN_008196f4(param_1,&UNK_002ed8e8,0);
    return;
  }
  FUN_00569544(param_1 + 0x3ec);
  return;
}
