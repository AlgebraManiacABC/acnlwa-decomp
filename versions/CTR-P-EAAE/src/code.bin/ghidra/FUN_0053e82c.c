#include "../../../include/types.h"

undefined4 FUN_0053e82c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((char)param_1[0x13] != '\0') && (param_2 != 0)) &&
     (iVar1 = (**(code **)(*param_1 + 0x20))(param_1), iVar1 != 0)) {
    uVar2 = (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}
