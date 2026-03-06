/**
 * FUN_00223030.c
 * Source line: 279023
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00223030(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_004b4fc0(*(undefined4 *)(param_1 + 0xb2f4),*(undefined4 *)(param_2 * 4 + 0x94fc50),1);
  iVar2 = param_1 + param_2 * 0x28 + 0xb2fc;
  FUN_00568630(*(undefined4 *)(param_1 + 0xb2f4),iVar2,uVar1,0);
  FUN_005697e0(0,iVar2);
  (**(code **)(**(int **)(param_1 + 0xb2f4) + 0xc))();
  uVar1 = FUN_004b4fc0(*(undefined4 *)(param_1 + 0xb2f4),*(undefined4 *)(param_2 * 4 + 0x94fc50),1);
  FUN_00568984(*(undefined4 *)(param_1 + 0xb2f4),iVar2,uVar1,0);
  return;
}
