/**
 * FUN_00610928.c
 * Source line: 925707
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00610928(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x2c4);
  if (iVar1 != 0) {
    FUN_00569420(param_1 + 0x2c,param_1 + 0x2c4);
    *(undefined1 *)(param_1 + 0x1f48) = 0;
    *(uint *)(param_1 + 0x1c48) = *(uint *)(param_1 + 0x1c48) & 0xfffffff7;
    FUN_0081b110(param_1,FUN_0060fb68,0);
    return;
  }
  FUN_00569544(param_1 + 0x2c4);
  return;
}
