/**
 * FUN_002a2594.c
 * Source line: 343650
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002a2594(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x198);
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(param_1 + 0x24,"G_licence_00",1);
    FUN_00568984(param_1 + 0x24,param_1 + 0x198,uVar2,0);
    FUN_00818428(param_1,FUN_002a24a0,0);
    return;
  }
  FUN_00569544(param_1 + 0x198);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x24);
}
