/**
 * FUN_001919c8.c
 * Source line: 205409
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_001919c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_0074fdd0();
  iVar3 = param_1 + 0x4e8;
  if ((iVar1 != 0) &&
     ((*(code **)(param_1 + 0x6d68) != FUN_002e250c || (*(int *)(param_1 + 0x6d6c) != 0)))) {
    uVar2 = FUN_004b4fc0(iVar3,"G_inout",1);
    FUN_00568984(iVar3,param_1 + 0x65c,uVar2,0);
    DAT_0094fd58 &= 0xffffffe7;
    FUN_005204b0(param_1);
    return;
  }
  FUN_00569544(param_1 + 0x65c);
          // WARNING: Subroutine does not return
  FUN_00568c10(iVar3);
}
