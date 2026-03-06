/**
 * FUN_0070d7e4.c
 * Source line: 1065118
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0070d7e4(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  FUN_006a6c78(&local_10,&local_c,*param_2,param_2[1]);
  if ((*param_1 == local_10) && (param_1[1] == local_c)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
