/**
 * FUN_005bcbfc.c
 * Source line: 867973
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_005bcbfc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 8) = 0x21;
  FUN_00303cdc(param_1);
  *(undefined1 *)(param_1 + 9) = 0xff;
  *(undefined1 *)(param_1 + 10) = 9;
  uVar1 = FUN_002fb378();
  FUN_005cddb4(param_1,uVar1);
  FUN_005bce04(param_1,param_2);
  *(undefined1 *)(param_1 + 9) = 4;
  return;
}
