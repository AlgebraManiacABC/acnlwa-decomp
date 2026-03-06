/**
 * FUN_003544dc.c
 * Source line: 455611
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_003544dc(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_00354504(&local_10);
  if (-1 < iVar1) {
    *param_1 = (char)local_10;
    iVar1 = 0;
  }
  return iVar1;
}
