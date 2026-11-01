#include "../../../include/types.h"

void FUN_00390edc(undefined4 param_1)

{
  int *piVar1;
  undefined1 auStack_18 [8];
  
  (**(code **)(iRam00ae5908 + 8))();
  while (piVar1 = (int *)**(int **)(iRam00975c94 + 0x10), piVar1 != *(int **)(iRam00975c94 + 0x10))
  {
    (**(code **)(*(int *)piVar1[2] + 0xc))(auStack_18);
    FUN_00390dd4(param_1,auStack_18);
    FUN_003d0d6c(auStack_18);
  }
  (**(code **)(iRam00ae5908 + 0xc))(0xae5908);
  return;
}
