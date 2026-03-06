/**
 * FUN_00544f68.c
 * Source line: 787912
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00544f68(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  (**(code **)(*param_1 + 8))(param_1);
  iVar1 = 0;
  do {
    if (*(char *)(param_1[1] + iVar1) == '\0') {
      if (iVar1 < 0x80001) goto LAB_00544fc0;
      break;
    }
    iVar1 += 1;
  } while (iVar1 < 0x80001);
  iVar1 = 0;
LAB_00544fc0:
  (**(code **)(*param_1 + 8))(param_1);
  FUN_00544950(param_2,param_3,(char *)param_1[1],iVar1);
  return;
}
