/**
 * FUN_00311a34.c
 * Source line: 414958
 * Body lines: 7
 */
#include "../../../include/types.h"

bool FUN_00311a34(short *param_1,short *param_2)

{
  int iVar1;
  
  if ((*param_1 == *param_2) &&
     ((char)((char)param_1[10] * -0x80) == (char)((char)param_2[10] * -0x80))) {
    iVar1 = FUN_00712c88(param_1 + 1,param_2 + 1);
    return iVar1 != 0;
  }
  return false;
}
