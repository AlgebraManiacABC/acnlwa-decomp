/**
 * FUN_0022bc80.c
 * Source line: 282531
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0022bc80(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0xf0) = param_1 + 0x150;
  FUN_00569184(param_1 + 4,"btn_pos.bclyt",0,0x2500);
  *(undefined1 *)(param_1 + 0x10) = 0x9b;
  FUN_002ccfd4(param_1 + 0x398);
  *(int *)(param_1 + 0x3a4) = param_1 + 4;
  uVar1 = FUN_0056878c(param_1 + 4,*(undefined4 *)(param_2 * 4 + 0x951658));
  FUN_002e0374(param_1 + 0x398,uVar1);
  return 1;
}
