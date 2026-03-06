/**
 * FUN_002134c0.c
 * Source line: 272465
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002134c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004b4fc0(param_1 + 4,"G_flsh_00",1);
  FUN_00568630(param_1 + 4,param_1 + 0x178,uVar1,0);
  uVar1 = FUN_004b4fc0(param_1 + 4,"G_flshBS_00",1);
  FUN_00568630(param_1 + 4,param_1 + 0x178,uVar1,0);
  uVar1 = FUN_004b4fc0(param_1 + 4,"G_flsh_00",1);
  FUN_00568630(param_1 + 4,param_1 + 0x1a0,uVar1,0);
  FUN_00569508(param_1 + 0x178);
  FUN_00569508(param_1 + 0x1a0);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 4);
}
