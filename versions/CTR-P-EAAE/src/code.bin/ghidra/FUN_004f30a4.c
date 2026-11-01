#include "../../../include/types.h"

void FUN_004f30a4(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)param_1[6];
  if (*(char *)(iVar1 + 0x18b) == '\0') {
    return;
  }
  if ((*(char *)(iVar1 + 0x188) != param_2) &&
     (*(char *)(iVar1 + 0x188) = (char)param_2, *(char *)(iVar1 + 0x18b) != '\0')) {
    FUN_00509190(iVar1,param_2,*(undefined4 *)(iVar1 + 0x48));
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,0);
  return;
}
