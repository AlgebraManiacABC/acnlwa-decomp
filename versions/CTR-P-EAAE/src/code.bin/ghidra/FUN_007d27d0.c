/**
 * FUN_007d27d0.c
 * Source line: 1178673
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_007d27d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 4);
  uVar1 = *(undefined1 *)(param_1 + 8);
  uVar2 = *(undefined1 *)(param_1 + 9);
  cVar3 = *(char *)(param_1 + 10);
  iVar5 = iVar6 + 0x58;
  FUN_00135748(iVar5);
  uVar4 = FUN_0012f600(iVar6,param_2,param_3,uVar1,uVar2,(int)cVar3);
  FUN_001357ec(iVar5);
  return uVar4;
}
