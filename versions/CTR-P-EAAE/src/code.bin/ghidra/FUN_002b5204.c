/**
 * FUN_002b5204.c
 * Source line: 353465
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002b5204(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0();
  if (iVar1 != 0) {
    FUN_00569420(param_1 + 0x3e0,param_1 + 0x5cc);
    FUN_00818a6c(param_1 + 0x28,FUN_002b4e64,0);
    return;
  }
  FUN_00569544(param_1 + 0x5cc);
  *(undefined1 *)(param_1 + 0x502) = 1;
  return;
}
