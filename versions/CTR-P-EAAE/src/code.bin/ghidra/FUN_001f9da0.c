/**
 * FUN_001f9da0.c
 * Source line: 259038
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_001f9da0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0();
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(param_1 + 0x38,"A00_cursol",1);
    FUN_00568984(param_1 + 0x38,param_1 + 0x444,uVar2,0);
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x38);
  }
  FUN_00569544(param_1 + 0x444);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x38);
}
