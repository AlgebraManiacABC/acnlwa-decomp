/**
 * FUN_00317a50.c
 * Source line: 418544
 * Body lines: 7
 */
#include "../../../include/types.h"

int FUN_00317a50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0056a974(param_1 + 0x1c);
  if ((iVar1 != 0) && (*(int *)(param_1 + 4) == 0)) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0xec);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xec);
  }
  return iVar1;
}
