/**
 * FUN_00748070.c
 * Source line: 1104004
 * Body lines: 15
 */
#include "../../../include/types.h"

bool FUN_00748070(int param_1,uint *param_2)

{
  int iVar1;
  int extraout_r1;
  
  iVar1 = FUN_0013c9b8();
  iVar1 = param_1 + iVar1 * 8;
  if ((*(uint *)(iVar1 + 0xc) < *param_2) || (param_2[1] < *(uint *)(iVar1 + 8))) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  if (*(char *)(param_1 + 4) != '\0') {
    FUN_0013c9b4(param_1);
    iVar1 = extraout_r1;
  }
  return iVar1 != 0;
}
