/**
 * FUN_00127cc4.c
 * Source line: 129260
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined8 FUN_00127cc4(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)param_1 + 0x34);
  uVar1 = *(undefined4 *)(param_1 + 7);
  *(undefined4 *)(iVar2 + -4) = *(undefined4 *)((int)param_1 + 0x3c);
  *(undefined4 *)(iVar2 + -8) = uVar1;
  return *param_1;
}
