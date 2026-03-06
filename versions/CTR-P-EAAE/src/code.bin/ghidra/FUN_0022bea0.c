/**
 * FUN_0022bea0.c
 * Source line: 282607
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0022bea0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(int *)(param_1 + 0xf0) = param_1 + 0x150;
  FUN_00569184(param_1 + 4,"btn_pos.bclyt",0,0x2500);
  *(undefined1 *)(param_1 + 0x10) = 0x9b;
  FUN_002ccfd4(param_1 + 0x398);
  *(int *)(param_1 + 0x3a4) = param_1 + 4;
  uVar1 = FUN_0056878c(param_1 + 4,"N_cmnbtn_pos_R");
  uVar2 = FUN_0056878c(param_1 + 4,"N_cmnbtn_pos_L");
  FUN_00268928(param_1 + 0x398,uVar2,uVar1);
  return 1;
}
