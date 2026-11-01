#include "../../../include/types.h"

void FUN_007d53dc(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_18;
  undefined1 auStack_14 [8];
  
  piVar1 = (int *)(param_1 + 0x10);
  (**(code **)(*piVar1 + 8))();
  iVar2 = *(int *)(param_1 + 0x4c);
  while (iVar2 != 0) {
    local_18 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 8);
    FUN_008059d4(auStack_14,param_1 + 0x38,&local_18);
    iVar2 = *(int *)(param_1 + 0x4c);
  }
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}
