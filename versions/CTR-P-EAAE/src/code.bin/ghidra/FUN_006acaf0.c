/**
 * FUN_006acaf0.c
 * Source line: 1007829
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_006acaf0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_2 + 0x4bc;
  uVar2 = FUN_004b4fc0(iVar1,"G_pos_00",1);
  FUN_00568630(iVar1,param_2 + 0x658,uVar2,0);
  uVar2 = FUN_004b4fc0(param_2 + 0x798,"G_pos_00",1);
  FUN_00568630(param_2 + 0x798,param_2 + 0x934,uVar2,0);
  FUN_005697e0(param_1,param_2 + 0x658);
  FUN_005697e0(param_1,param_2 + 0x934);
          // WARNING: Subroutine does not return
  FUN_00568c10(iVar1);
}
