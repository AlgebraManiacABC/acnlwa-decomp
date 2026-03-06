/**
 * FUN_005b37b4.c
 * Source line: 863925
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005b37b4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005a337c();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x3f4) = 0;
    *(undefined4 *)(param_1 + 0x3f8) = 0;
  }
  return;
}
