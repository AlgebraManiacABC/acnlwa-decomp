/**
 * FUN_00747660.c
 * Source line: 1103419
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00747660(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    param_4 = *param_2;
  }
  if (iVar1 == 0 || param_4 == 0) {
    if (((param_2[1] != 0 || param_2[2] != 0) && (param_1[1] == param_2[1])) &&
       (param_1[2] == param_2[2])) {
      return 0;
    }
  }
  else if (param_4 == iVar1) {
    return 0;
  }
  return 1;
}
