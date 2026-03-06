/**
 * FUN_00318f40.c
 * Source line: 419465
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00318f40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0();
  if (iVar1 != 0) {
    DAT_0094fd58 |= 0x10;
    FUN_00569420(param_1 + 0x310,param_1 + 0x2088);
    *(undefined1 *)(param_1 + 0x3e20) = 0;
    FUN_00819d38(param_1 + 0xa4,FUN_00319198,0);
    return;
  }
  FUN_00569544(param_1 + 0x2088);
  *(undefined1 *)(param_1 + 0x432) = 1;
  return;
}
