/**
 * FUN_0026e7d0.c
 * Source line: 316996
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0026e7d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0(*(undefined4 *)(param_1 + 0x7c4));
  if (iVar1 != 0) {
    FUN_00569420(param_1 + 0x24,*(undefined4 *)(param_1 + 0x7c4));
    FUN_00817bd0(param_1,&UNK_0029b6ec,0);
    return;
  }
  FUN_00569544(*(undefined4 *)(param_1 + 0x7c4));
  *(undefined1 *)(param_1 + 0x146) = 1;
  return;
}
