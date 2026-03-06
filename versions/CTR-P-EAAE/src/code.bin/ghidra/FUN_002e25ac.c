/**
 * FUN_002e25ac.c
 * Source line: 378932
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_002e25ac(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x798) != '\0') {
    uVar1 = FUN_004b4fc0(param_1 + 0x24,"G_inout_00",1);
    FUN_00568630(param_1 + 0x24,param_1 + 0x198,uVar1,0);
    FUN_005697e0(0,param_1 + 0x198);
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x24);
  }
  return;
}
