/**
 * FUN_007366dc.c
 * Source line: 1091823
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_007366dc(int param_1)

{
  int iVar1;
  undefined4 local_10 [3];
  
  if ((((char)(*(int **)(param_1 + 4))[1] == '\0') ||
      (*(char *)(**(int **)(param_1 + 4) + 0x44) != '\0')) ||
     (iVar1 = FUN_00475914(local_10), iVar1 == 0)) {
    local_10[0] = 0;
  }
  return local_10[0];
}
