/**
 * FUN_0022bdf0.c
 * Source line: 282577
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0022bdf0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0056878c(param_1 + 4,"N_cmnbtn_pos_R");
  uVar2 = FUN_0056878c(param_1 + 4,"N_cmnbtn_pos_L");
  FUN_00268928(param_1 + 0x398,uVar2,uVar1);
  FUN_002cd3d0(param_1 + 0x398,2);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 4);
}
