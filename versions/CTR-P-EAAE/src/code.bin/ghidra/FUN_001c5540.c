/**
 * FUN_001c5540.c
 * Source line: 230807
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_001c5540(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x1a0);
  if (iVar1 != 0) {
    FUN_00569420(param_1 + 0x2c,param_1 + 0x1a0);
    *(undefined1 *)(param_1 + 0x9d0) = 0;
    FUN_00816b18(param_1,FUN_001c5190,0);
    return;
  }
  FUN_00569544(param_1 + 0x1a0);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x2c);
}
