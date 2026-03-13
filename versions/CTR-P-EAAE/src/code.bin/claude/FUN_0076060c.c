/**
 * FUN_0076060c.c
 * Source line: 1120099
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_0076060c(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00760108();
  if (param_2 != NULL) {
    *param_2 = (char)iVar1;
  }
  return iVar1 != 0x12;
}
