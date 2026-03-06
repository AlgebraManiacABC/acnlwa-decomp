/**
 * FUN_003386f0.c
 * Source line: 437164
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_003386f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x3e0);
  if (iVar1 != 0) {
    uVar2 = FUN_004b4fc0(param_1 + 0x294,"G_inout",1);
    FUN_00568984(param_1 + 0x294,param_1 + 0x3e0,uVar2,0);
    DAT_0094fd58 |= 0x10;
    FUN_0081a7b8(param_1 + 0x28,&UNK_003393cc,0);
    return;
  }
  FUN_00569544(param_1 + 0x3e0);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x294);
}
