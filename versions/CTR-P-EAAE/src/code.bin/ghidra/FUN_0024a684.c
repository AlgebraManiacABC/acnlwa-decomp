/**
 * FUN_0024a684.c
 * Source line: 298872
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0024a684(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = uVar3 * 4;
    iVar2 = uVar3 * 4;
    *(undefined4 *)(param_1 + uVar3 * 4) = *(undefined4 *)(param_2 + uVar3 * 4);
    uVar3 += 2;
    *(undefined4 *)(param_1 + iVar2 + 4) = *(undefined4 *)(param_2 + iVar1 + 4);
  } while (uVar3 < 0xba);
  return;
}
