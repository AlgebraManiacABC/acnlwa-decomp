/**
 * FUN_00287170.c
 * Source line: 330215
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00287170(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0();
  if ((iVar1 != 0) && (iVar1 = FUN_0074fdd0(param_1 + 0x5cc), iVar1 != 0)) {
    uVar2 = FUN_004b4fc0(param_1 + 0x294,&DAT_0028723c,1);
    FUN_00568984(param_1 + 0x294,param_1 + 0x408,uVar2,0);
    uVar2 = FUN_004b4fc0(param_1 + 0x458,&DAT_0028723c,1);
    FUN_00568984(param_1 + 0x458,param_1 + 0x5cc,uVar2,0);
    FUN_005204b0(param_1);
    return;
  }
  FUN_00569544(param_1 + 0x408);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x294);
}
