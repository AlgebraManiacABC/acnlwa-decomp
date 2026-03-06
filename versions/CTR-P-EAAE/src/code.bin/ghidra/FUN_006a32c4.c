/**
 * FUN_006a32c4.c
 * Source line: 1002214
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_006a32c4(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1 + 0x504;
  uVar2 = FUN_004b4fc0(iVar1,"B00_icn",1);
  FUN_00568630(iVar1,param_1 + 0x8e8,uVar2,0);
  FUN_005697e0((float)(longlong)param_3,param_1 + 0x8e8);
          // WARNING: Subroutine does not return
  FUN_00568c10(iVar1);
}
