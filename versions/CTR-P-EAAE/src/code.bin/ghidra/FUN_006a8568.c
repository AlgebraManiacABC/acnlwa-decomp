/**
 * FUN_006a8568.c
 * Source line: 1004848
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_006a8568(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x188) = param_2;
  do {
    FUN_002e6450(param_1 + iVar1 * 0x18 + 4);
    iVar1 += 1;
  } while (iVar1 < 0x10);
  return;
}
