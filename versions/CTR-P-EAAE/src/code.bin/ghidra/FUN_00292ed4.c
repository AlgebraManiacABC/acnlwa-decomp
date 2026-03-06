/**
 * FUN_00292ed4.c
 * Source line: 336256
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00292ed4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0();
  if (iVar1 != 0) {
    FUN_00569420(param_1 + 0x1b8,param_1 + 0x574);
    FUN_0081831c(param_1 + 0x14,&UNK_00291608,0);
    return;
  }
  FUN_00569544(param_1 + 0x574);
  *(undefined1 *)(param_1 + 0x2da) = 1;
  return;
}
