/**
 * FUN_006f5760.c
 * Source line: 1051498
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_006f5760(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004b4fc0(param_1 + 0x26c,"G_inout",1);
  FUN_00568630(param_1 + 0x26c,param_1 + 0x3b8,uVar1,0);
  FUN_005697e0(0,param_1 + 0x3b8);
  if (*(int *)(param_1 + 0x420) != 0 || *(int *)(param_1 + 0x424) != 0) {
    *(undefined1 *)(param_1 + 0x40f) = 1;
  }
  return;
}
