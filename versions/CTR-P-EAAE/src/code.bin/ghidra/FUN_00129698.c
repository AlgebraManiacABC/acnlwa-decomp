/**
 * FUN_00129698.c
 * Source line: 130786
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00129698(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  
  iVar1 = FUN_0012f87c(param_2,param_3,param_4);
  *param_1 = (longlong)iVar1 * 86400000 +
             (longlong)param_5 * 3600000 + (longlong)param_8 +
             (longlong)param_7 * 1000 + (longlong)param_6 * 60000;
  return;
}
