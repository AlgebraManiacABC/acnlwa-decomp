/**
 * FUN_0026e5c0.c
 * Source line: 316932
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0026e5c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0();
  if (iVar1 != 0) {
    FUN_00569420(param_1 + 0x24,param_1 + 0x7c8);
    FUN_00817bd0(param_1,&UNK_0029b6ec,0);
    return;
  }
  FUN_00569544(param_1 + 0x7c8);
  *(undefined1 *)(param_1 + 0x146) = 1;
  return;
}
