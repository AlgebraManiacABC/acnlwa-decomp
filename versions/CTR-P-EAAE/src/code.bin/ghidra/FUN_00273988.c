/**
 * FUN_00273988.c
 * Source line: 320089
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00273988(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x3e0);
  if (iVar1 != 0) {
    FUN_00569420(param_1 + 0x26c,param_1 + 0x3e0);
    *(undefined1 *)(param_1 + 0x2bf0) = 0;
    FUN_00817cd8(param_1,&UNK_00273a18,0);
    return;
  }
  FUN_00569544(param_1 + 0x3e0);
  return;
}
