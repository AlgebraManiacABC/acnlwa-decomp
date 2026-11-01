#include "../../../include/types.h"

undefined4 FUN_0070c2e8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xae8) == -1) {
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_005c2c80(*(int *)(param_1 + 0xae8));
    if (iVar2 == 0) {
      uVar1 = 5;
    }
    else {
      uVar1 = 3;
    }
  }
  return uVar1;
}
