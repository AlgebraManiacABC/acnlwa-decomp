/**
 * FUN_001c54b0.c
 * Source line: 230778
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_001c54b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x178);
  if (iVar1 != 0) {
    FUN_00569420(param_1 + 0x2c,param_1 + 0x178);
    *(undefined1 *)(param_1 + 0x9d0) = 0;
    *(undefined1 *)(param_1 + 0x9d1) = 0;
    FUN_00816b18(param_1,&UNK_001c5194,0);
    return;
  }
  FUN_00569544(param_1 + 0x178);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x2c);
}
