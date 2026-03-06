/**
 * FUN_00222fc4.c
 * Source line: 279008
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00222fc4(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_004b4fc0(*(undefined4 *)(param_2 + 0xb2f4),*(undefined4 *)(param_3 * 4 + 0x94fc50),1);
  iVar2 = param_2 + param_3 * 0x28 + 0xb2fc;
  FUN_00568630(*(undefined4 *)(param_2 + 0xb2f4),iVar2,uVar1,0);
  FUN_005697e0(param_1,iVar2);
  return;
}
