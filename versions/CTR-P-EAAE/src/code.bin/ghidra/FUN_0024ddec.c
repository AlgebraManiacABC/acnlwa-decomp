/**
 * FUN_0024ddec.c
 * Source line: 300718
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0024ddec(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar3 = iVar2 + 1;
    iVar1 += 2;
    *(undefined2 *)(param_1 + iVar2 * 2 + 4) = 0xffff;
    iVar2 += 2;
    *(undefined2 *)(param_1 + iVar3 * 2 + 4) = 0xffff;
  } while (iVar1 < 6);
  return;
}
