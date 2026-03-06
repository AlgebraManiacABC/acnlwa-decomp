/**
 * FUN_00286ed8.c
 * Source line: 330153
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00286ed8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x3e0);
  if ((iVar1 != 0) && (iVar1 = FUN_0074fdd0(param_1 + 0x5a4), iVar1 != 0)) {
    uVar2 = FUN_004b4fc0(param_1 + 0x294,"G_inout_00",1);
    FUN_00568984(param_1 + 0x294,param_1 + 0x3e0,uVar2,0);
    uVar2 = FUN_004b4fc0(param_1 + 0x458,"G_inout_00",1);
    FUN_00568984(param_1 + 0x458,param_1 + 0x5a4,uVar2,0);
    FUN_00817eec(param_1 + 0x28,FUN_0028738c,0);
    return;
  }
  FUN_00569544(param_1 + 0x3e0);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x294);
}
