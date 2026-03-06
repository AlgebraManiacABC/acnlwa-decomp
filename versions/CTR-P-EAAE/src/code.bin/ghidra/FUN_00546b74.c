/**
 * FUN_00546b74.c
 * Source line: 789096
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00546b74(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  (**(code **)(*param_3 + 8))(param_3);
  iVar1 = 0;
  do {
    if (*(char *)(param_3[1] + iVar1) == '\0') {
      if (iVar1 < 0x80001) goto LAB_00546bc8;
      break;
    }
    iVar1 += 1;
  } while (iVar1 < 0x80001);
  iVar1 = 0;
LAB_00546bc8:
  (**(code **)(*param_3 + 8))(param_3);
          // WARNING: Could not recover jumptable at 0x00546bf0. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 4))(param_2,param_3[1],iVar1);
  return;
}
