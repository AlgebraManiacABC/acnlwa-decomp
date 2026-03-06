/**
 * FUN_003275a0.c
 * Source line: 428072
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_003275a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0();
  if (iVar1 != 0) {
    FUN_00568984(param_1 + 0x38,param_1 + 0x41c,*(undefined4 *)(param_1 + 0x484),0);
    *(undefined1 *)(param_1 + 0xabf) = 0;
    FUN_005204b0(param_1);
    FUN_0081a278(param_1 + 0x14,&UNK_00326548,0);
    return;
  }
  FUN_00569544(param_1 + 0x41c);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x38);
}
