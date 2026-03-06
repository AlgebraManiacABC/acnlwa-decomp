/**
 * FUN_005ad690.c
 * Source line: 859252
 * Body lines: 7
 */
#include "../../../include/types.h"

int FUN_005ad690(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005ae51c();
  FUN_001017e4(param_1 + iVar1 * 2,&UNK_008b3710);
  iVar1 += 1;
  iVar2 = FUN_00755504(param_4,param_1 + iVar1 * 2,param_2 - iVar1);
  return iVar2 + iVar1;
}
