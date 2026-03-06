/**
 * FUN_0061a810.c
 * Source line: 931500
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0061a810(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  
  local_20 = param_4;
  iVar1 = FUN_0075dfe8(DAT_0095362c);
  if (iVar1 == 0) {
    uVar2 = FUN_00622fa0(DAT_0095362c + 0x7880,param_1);
    return uVar2;
  }
  local_20 = CONCAT22(local_20._2_2_,(short)(param_1 << 8));
  iVar1 = DAT_0095362c + 0x10;
  FUN_00627f74(iVar1);
  FUN_00627d44(iVar1,&local_20,2);
  FUN_0062801c(iVar1,0x30,0);
  return 1;
}
