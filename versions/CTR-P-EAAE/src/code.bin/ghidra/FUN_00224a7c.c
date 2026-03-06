/**
 * FUN_00224a7c.c
 * Source line: 280031
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00224a7c(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_004b4fc0(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_3 * 4 + 0x94fcc4),1);
  iVar2 = param_2 + param_3 * 0x28;
  FUN_00568630(*(undefined4 *)(param_2 + 4),iVar2 + 0xc,uVar1,0);
  FUN_005697e0(param_1,iVar2 + 0xc);
  (**(code **)(**(int **)(param_2 + 4) + 0xc))();
  uVar1 = FUN_004b4fc0(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_3 * 4 + 0x94fcc4),1);
  FUN_00568984(*(undefined4 *)(param_2 + 4),iVar2 + 0xc,uVar1,0);
  return;
}
