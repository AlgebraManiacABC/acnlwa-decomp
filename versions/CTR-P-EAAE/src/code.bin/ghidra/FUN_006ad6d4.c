/**
 * FUN_006ad6d4.c
 * Source line: 1008136
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_006ad6d4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(char *)(param_1 + 0x635a) = (char)param_2;
  iVar1 = param_1 + 0x4bc;
  uVar2 = FUN_004b4fc0(iVar1,"G_kind_00",1);
  FUN_00568630(iVar1,param_1 + 0x630,uVar2,0);
  uVar2 = FUN_004b4fc0(param_1 + 0x798,"G_kind_00",1);
  FUN_00568630(param_1 + 0x798,param_1 + 0x90c,uVar2,0);
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = 0x3f800000;
  }
  FUN_005697e0(uVar2,param_1 + 0x630);
  FUN_005697e0(uVar2,param_1 + 0x90c);
          // WARNING: Subroutine does not return
  FUN_00568c10(iVar1);
}
