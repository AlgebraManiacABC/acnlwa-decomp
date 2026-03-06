/**
 * FUN_00694990.c
 * Source line: 998617
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00694990(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x5e0);
  if (iVar1 != 0) {
    FUN_00569420(param_1 + 0x3cc,param_1 + 0x5e0);
    *(undefined1 *)(param_1 + 0x612) = *(undefined1 *)(param_1 + 0x611);
    FUN_0081b218(param_1 + 0x14,&UNK_006947e0,0);
    return;
  }
  FUN_00569544(param_1 + 0x5e0);
  return;
}
