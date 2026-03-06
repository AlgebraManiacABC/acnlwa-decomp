/**
 * FUN_002e5ed8.c
 * Source line: 380958
 * Body lines: 9
 */
#include "../../../include/types.h"

bool FUN_002e5ed8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x10) != *(int *)(iVar1 + 0xc))) {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    FUN_0054d964();
  }
  return iVar1 != 0;
}
