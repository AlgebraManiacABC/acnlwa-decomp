/**
 * FUN_00428d98.c
 * Source line: 592545
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_00428d98(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  uVar1 = FUN_00100e5c(param_1 + 4,0x80,param_2,&uStack_8);
  if (0x7f < uVar1) {
    *(undefined1 *)(param_1 + 0x83) = 0;
    uVar1 = 0x7f;
  }
  return uVar1;
}
