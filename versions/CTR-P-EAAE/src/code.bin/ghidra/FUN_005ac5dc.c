/**
 * FUN_005ac5dc.c
 * Source line: 858531
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_005ac5dc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_005ae51c();
  FUN_001017e4(param_1 + iVar1 * 2,&UNK_008b3710);
  iVar1 += 1;
  iVar2 = FUN_00755504(param_4,param_1 + iVar1 * 2,param_2 - iVar1);
  FUN_001017e4(param_1 + (iVar1 + iVar2) * 2,&DAT_005ac678);
  iVar3 = iVar1 + iVar2 + 1;
  param_1 += iVar3 * 2;
  iVar1 = FUN_00755330(param_4,param_1,param_2 - iVar3);
  iVar2 = iVar1 + 1;
  *(undefined2 *)(param_1 + iVar1 * 2) = 0x2e;
  iVar1 = FUN_007555cc(param_4,param_1 + iVar2 * 2,(param_2 - iVar3) - iVar2);
  return iVar1 + iVar2 + iVar3;
}
