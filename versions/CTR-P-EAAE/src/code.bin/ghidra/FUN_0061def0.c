/**
 * FUN_0061def0.c
 * Source line: 933584
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0061def0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0075dfe8(DAT_0095362c);
  if (iVar1 == 0) {
    uVar2 = FUN_00305f44();
    FUN_00624aa4(param_1 + 0x20,uVar2);
  }
  else {
    iVar1 = DAT_0095362c + 0x10;
    FUN_00627f74(iVar1);
    FUN_0062801c(iVar1,0x67,0);
  }
  return 1;
}
