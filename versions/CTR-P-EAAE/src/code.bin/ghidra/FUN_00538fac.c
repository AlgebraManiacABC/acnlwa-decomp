#include "../../../include/types.h"

void FUN_00538fac(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  (**(code **)(*param_3 + 8))(param_3);
  iVar1 = 0;
  do {
    if (*(char *)(param_3[1] + iVar1) == '\0') {
      if (iVar1 < 0x40001) goto LAB_00538ff8;
      break;
    }
    iVar1 += 1;
  } while (iVar1 < 0x40001);
  iVar1 = 0;
LAB_00538ff8:
  (**(code **)(*param_3 + 8))(param_3);
  (**(code **)(*param_2 + 4))(param_2,param_3[1],iVar1);
  return;
}
