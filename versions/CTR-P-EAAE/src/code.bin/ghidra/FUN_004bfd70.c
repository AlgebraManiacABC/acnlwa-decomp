/**
 * FUN_004bfd70.c
 * Source line: 701999
 * Body lines: 9
 */
#include "../../../include/types.h"

char FUN_004bfd70(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,param_3,0,param_4);
  if (cVar1 == '\0') {
    if (*param_2 != 0) {
      FUN_004c46ec();
    }
    cVar1 = '\0';
  }
  return cVar1;
}
