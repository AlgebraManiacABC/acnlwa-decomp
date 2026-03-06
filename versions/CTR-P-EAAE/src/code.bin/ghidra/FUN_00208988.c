/**
 * FUN_00208988.c
 * Source line: 266326
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00208988(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x500) = 5;
  uVar1 = FUN_004b4fc0(param_1 + 0x24,
                       *(undefined4 *)(&UNK_0088790c + *(int *)(param_1 + 0x4fc) * 0x18),1);
  FUN_00568630(param_1 + 0x24,param_1 + 0x408,uVar1,0);
  FUN_005697e0(0,param_1 + 0x408);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x24);
}
