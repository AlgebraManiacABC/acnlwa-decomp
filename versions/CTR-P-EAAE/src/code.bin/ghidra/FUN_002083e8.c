/**
 * FUN_002083e8.c
 * Source line: 266137
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002083e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x3b8);
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(param_1 + 0x24,
                         *(undefined4 *)(&UNK_008877ac + *(int *)(param_1 + 0x4fc) * 4),1);
    FUN_00568984(param_1 + 0x24,param_1 + 0x3b8,uVar2,0);
    *(undefined1 *)(param_1 + 0x1193) = 0;
    FUN_00817054(param_1,FUN_00208568,0);
    return;
  }
  FUN_00569544(param_1 + 0x3b8);
  return;
}
