/**
 * FUN_004601c4.c
 * Source line: 627926
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_004601c4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((((char)param_1[3] == '\0') && (param_2 != 0)) && (param_3 != 0)) {
    if ((*param_1 == 0) && (iVar1 = FUN_00142bbc(param_2,param_3), iVar1 != 0)) {
      *param_1 = param_2;
      param_1[1] = iVar1;
      param_1[2] = param_3;
      *(undefined1 *)(param_1 + 3) = 1;
      return 1;
    }
    return 0;
  }
  return 0;
}
