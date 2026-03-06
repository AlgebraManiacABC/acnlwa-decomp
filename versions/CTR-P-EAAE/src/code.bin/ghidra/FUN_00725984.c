/**
 * FUN_00725984.c
 * Source line: 1079738
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_00725984(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0x700009e) {
    iVar1 = FUN_002fbd54((int)param_1 + 0x67de);
    return iVar1 != 0;
  }
  return false;
}
