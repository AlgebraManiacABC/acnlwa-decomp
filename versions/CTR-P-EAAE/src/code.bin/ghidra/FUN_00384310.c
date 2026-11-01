#include "../../../include/types.h"

void FUN_00384310(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(param_2 + 0x105c);
  (**(code **)(*piVar1 + 8))();
  uVar2 = FUN_0046edac(param_2 + 0x38,param_3,param_4,param_5);
  FUN_003849a4(param_1,uVar2);
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}
