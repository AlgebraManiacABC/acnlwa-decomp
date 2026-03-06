/**
 * FUN_00694bdc.c
 * Source line: 998699
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00694bdc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0();
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(param_1 + 0x280,"G_base_01",1);
    FUN_00568984(param_1 + 0x280,param_1 + 0x540,uVar2,0);
    uVar2 = FUN_004b4fc0(param_1 + 0x280,"G_base_01",1);
    FUN_00568984(param_1 + 0x280,param_1 + 0x568,uVar2,0);
    uVar2 = FUN_004b4fc0(param_1 + 0x280,"G_base_00",1);
    FUN_00568630(param_1 + 0x280,param_1 + 0x540,uVar2,0);
    FUN_005697e0(*(undefined4 *)(param_1 + 0x61c),param_1 + 0x540);
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x280);
  }
  FUN_00569544(param_1 + 0x568);
  return;
}
