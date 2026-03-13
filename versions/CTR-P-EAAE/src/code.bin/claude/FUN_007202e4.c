/**
 * FUN_007202e4.c
 * Source line: 1077464
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_007202e4(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1a);
  uVar2 = *(undefined1 *)(param_2 + 0x1b);
  uVar3 = *(undefined1 *)(param_2 + 0x1c);
  *param_1 = *(undefined1 *)(param_2 + 0x1d);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return;
}
