/**
 * FUN_002446d8.c
 * Source line: 296027
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002446d8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x170);
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(param_1 + 0x24,"G_inout_00",1);
    FUN_00568984(param_1 + 0x24,param_1 + 0x170,uVar2,0);
    FUN_0081758c(param_1,FUN_002446b8,0);
    return;
  }
  FUN_00569544(param_1 + 0x170);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x24);
}
