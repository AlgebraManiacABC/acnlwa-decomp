/**
 * FUN_0056e04c.c
 * Source line: 814950
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined1 * FUN_0056e04c(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_18 [16];
  
  puVar1 = (undefined4 *)FUN_005fdf68(auStack_18,param_2 + 2,9);
  *puVar1 = &DAT_00908b9c;
  (**(code **)(*param_1 + 0x14))(param_1,auStack_18);
  return auStack_18;
}
