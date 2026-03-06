/**
 * FUN_00123344.c
 * Source line: 125325
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00123344(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    iVar3 = param_1 + iVar2 * 4;
    if (*(int *)(iVar3 + 0x14) == 0) {
      uVar1 = FUN_002fd108(0x30,param_2,0x20);
      uVar1 = FUN_0012c048(uVar1,*(undefined4 *)(&UNK_008391f8 + iVar2 * 4),param_2);
      *(undefined4 *)(iVar3 + 0x14) = uVar1;
    }
    iVar2 += 1;
  } while (iVar2 < 2);
  return;
}
