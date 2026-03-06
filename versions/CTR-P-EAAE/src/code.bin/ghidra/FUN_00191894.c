/**
 * FUN_00191894.c
 * Source line: 205368
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00191894(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_0074fdd0();
  iVar3 = param_1 + 0x4e8;
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(iVar3,"G_inout",1);
    FUN_00568984(iVar3,param_1 + 0x634,uVar2,0);
    DAT_0094fd58 |= 0x10;
    FUN_008162c0(param_1 + 0x28,FUN_00191480,0);
    return;
  }
  FUN_00569544(param_1 + 0x634);
          // WARNING: Subroutine does not return
  FUN_00568c10(iVar3);
}
