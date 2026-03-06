/**
 * FUN_002f1830.c
 * Source line: 386549
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_002f1830(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x3e0);
  if (((iVar1 != 0) && (iVar1 = FUN_0074fdd0(param_1 + 0x5a4), iVar1 != 0)) &&
     (iVar1 = FUN_0071ee8c(param_1 + 0x2128), iVar1 == 0)) {
    uVar2 = FUN_004b4fc0(param_1 + 0x294,"G_inout",1);
    FUN_00568984(param_1 + 0x294,param_1 + 0x3e0,uVar2,0);
    uVar2 = FUN_004b4fc0(param_1 + 0x458,"G_inout",1);
    FUN_00568984(param_1 + 0x458,param_1 + 0x5a4,uVar2,0);
    FUN_00819908(param_1 + 0x28,FUN_002f1640,0);
    return;
  }
  FUN_00569544(param_1 + 0x3e0);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x294);
}
