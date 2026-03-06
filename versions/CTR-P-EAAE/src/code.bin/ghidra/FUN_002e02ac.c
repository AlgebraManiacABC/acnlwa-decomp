/**
 * FUN_002e02ac.c
 * Source line: 377700
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002e02ac(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x3ac);
  if (iVar1 != 0) {
    FUN_00569420(param_1 + 0x238,param_1 + 0x3ac);
    *(undefined4 *)(param_1 + 0x50c) = 0x2e0990;
    *(undefined4 *)(param_1 + 0x510) = 0;
    return;
  }
  FUN_00569544(param_1 + 0x3ac);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x238);
}
