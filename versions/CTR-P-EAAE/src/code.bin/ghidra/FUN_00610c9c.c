/**
 * FUN_00610c9c.c
 * Source line: 925855
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00610c9c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x2ec);
  if (iVar1 != 0) {
    FUN_00569420(param_1 + 0x2c,param_1 + 0x2ec);
    *(undefined1 *)(param_1 + 0x1f48) = 0;
    FUN_0081b110(param_1,&UNK_0060fb64,0);
    return;
  }
  FUN_00569544(param_1 + 0x2ec);
  return;
}
