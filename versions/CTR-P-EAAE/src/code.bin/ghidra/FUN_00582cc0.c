/**
 * FUN_00582cc0.c
 * Source line: 827879
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00582cc0(int param_1)

{
  int iVar1;
  undefined1 auStack_54 [44];
  undefined1 auStack_28 [24];
  undefined2 local_10 [2];
  
  if ((((*(char *)(param_1 + 0xa8) != '\0') &&
       (iVar1 = FUN_00152a10(auStack_54,4,param_1,0,0), iVar1 == 0)) &&
      (iVar1 = FUN_00153840(local_10,auStack_28), iVar1 != 0)) &&
     (iVar1 = FUN_00152dc8(param_1,0,local_10[0]), iVar1 == 0)) {
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  return;
}
