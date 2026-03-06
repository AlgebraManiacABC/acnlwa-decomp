/**
 * FUN_006f8054.c
 * Source line: 1053115
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_006f8054(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  do {
    iVar3 = iVar2 + 1;
    iVar1 += 2;
    *(undefined4 *)(param_1 + iVar2 * 4 + 8) = 0;
    iVar2 += 2;
    *(undefined4 *)(param_1 + iVar3 * 4 + 8) = 0;
  } while (iVar1 < 100);
  return;
}
