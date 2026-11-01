#include "../../../include/types.h"

void FUN_00379ad0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_003d743c();
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  *(undefined4 *)(param_1 + 0x94) = 0;
  (**(code **)(*piVar2 + 0xc))(piVar2);
  return;
}
