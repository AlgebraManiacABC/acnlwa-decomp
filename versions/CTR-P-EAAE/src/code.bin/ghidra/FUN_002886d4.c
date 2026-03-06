/**
 * FUN_002886d4.c
 * Source line: 330814
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002886d4(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x2d54);
  FUN_002b6d20(param_1 + *piVar2 * 0xe0 + 0xcf0,1);
  *(undefined1 *)(param_1 + *piVar2 * 0xe0 + 0xdc9) = 0;
  uVar1 = FUN_004b4fc0(param_1 + 0x294,"G_inout",1);
  FUN_00568630(param_1 + 0x294,param_1 + 0x3e0,uVar1,0);
  FUN_005697e0(0,param_1 + 0x3e0);
  uVar1 = FUN_004b4fc0(param_1 + 0x294,"G_color",1);
  FUN_00568630(param_1 + 0x294,param_1 + 0x430,uVar1,0);
  FUN_005697e0((float)(longlong)*piVar2,param_1 + 0x430);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x294);
}
