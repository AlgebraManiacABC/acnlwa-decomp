/**
 * FUN_00736728.c
 * Source line: 1091839
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_00736728(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_10 [3];
  
  if ((((char)param_1[1] == '\0') || (*(char *)(*param_1 + 0x44) != '\0')) ||
     (iVar1 = FUN_00475968(local_10,*param_1,param_2), iVar1 == 0)) {
    local_10[0] = 0;
  }
  return local_10[0];
}
