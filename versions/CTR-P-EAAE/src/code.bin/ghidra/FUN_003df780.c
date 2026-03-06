/**
 * FUN_003df780.c
 * Source line: 554652
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_003df780(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_1;
  uVar1 = (uint)(param_2 - param_1[1]) >> 4;
  uVar3 = param_3 + uVar1;
  for (; uVar1 < uVar3; uVar1 += 1) {
    *(undefined1 *)(iVar2 + uVar1) = 0;
  }
  return;
}
