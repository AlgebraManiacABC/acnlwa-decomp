/**
 * FUN_0031e610.c
 * Source line: 422868
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0031e610(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x3cc);
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(param_1 + 0x270,"G_name",1);
    FUN_00568984(param_1 + 0x270,param_1 + 0x3cc,uVar2,0);
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x270);
  }
  FUN_00569544(param_1 + 0x3cc);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x270);
}
