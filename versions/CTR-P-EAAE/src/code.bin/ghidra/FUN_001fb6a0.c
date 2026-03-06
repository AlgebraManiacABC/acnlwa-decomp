/**
 * FUN_001fb6a0.c
 * Source line: 259602
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_001fb6a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0();
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(param_1 + 0x198,"G_inout",1);
    FUN_00568984(param_1 + 0x198,param_1 + 0x5cc,uVar2,0);
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x198);
  }
  FUN_00569544(param_1 + 0x5cc);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x198);
}
