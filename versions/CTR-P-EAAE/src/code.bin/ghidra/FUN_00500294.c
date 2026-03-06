/**
 * FUN_00500294.c
 * Source line: 746176
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00500294(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004fe968(param_1,2);
  if ((iVar1 != 0) && (iVar1 = FUN_004fe968(param_1,6), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}
