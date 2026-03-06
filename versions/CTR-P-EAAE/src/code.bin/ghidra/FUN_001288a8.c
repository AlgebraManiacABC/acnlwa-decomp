/**
 * FUN_001288a8.c
 * Source line: 129922
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_001288a8(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  iVar2 = 0;
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  do {
    param_1[iVar2 + 8] = 0;
    iVar1 += 2;
    param_1[iVar2 + 9] = 0;
    iVar2 += 2;
  } while (iVar1 < 10);
  return;
}
