/**
 * FUN_00101978.c
 * Source line: 105407
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00101978(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar4 * 2;
    iVar1 = FUN_002f8848(*(undefined2 *)(param_1 + iVar3));
    iVar2 = FUN_002f8848(*(undefined2 *)(param_2 + iVar3));
    if ((iVar1 != iVar2) || (*(short *)(param_1 + iVar3) == 0)) break;
    iVar4 += 1;
  }
  return;
}
