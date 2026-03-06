/**
 * FUN_006c8988.c
 * Source line: 1026299
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_006c8988(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x3b8);
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(param_1 + 0x24,"G_inout",1);
    FUN_00568984(param_1 + 0x24,param_1 + 0x3b8,uVar2,0);
    *(undefined4 *)(param_1 + 0x438) = 0;
    FUN_0081b750(param_1,&UNK_006c8bdc,0);
    return;
  }
  FUN_00569544(param_1 + 0x3b8);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x24);
}
