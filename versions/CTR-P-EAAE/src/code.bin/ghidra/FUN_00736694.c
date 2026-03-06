/**
 * FUN_00736694.c
 * Source line: 1091807
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00736694(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_10 [4];
  undefined4 local_c;
  
  if ((((char)param_1[1] == '\0') || (*(char *)(*param_1 + 0x44) != '\0')) ||
     (iVar1 = FUN_00475968(auStack_10,*param_1,param_2), iVar1 == 0)) {
    local_c = 0;
  }
  return local_c;
}
