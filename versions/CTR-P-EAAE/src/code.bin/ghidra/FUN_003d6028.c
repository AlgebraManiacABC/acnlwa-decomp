/**
 * FUN_003d6028.c
 * Source line: 547320
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_003d6028(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  
  *param_1 = &UNK_008fec4c;
  param_1[2] = param_2;
  piVar2 = (int *)(param_2 + 4);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 7;
  param_1[5] = *(int *)(param_1[2] + 0x10) << 3;
  return;
}
