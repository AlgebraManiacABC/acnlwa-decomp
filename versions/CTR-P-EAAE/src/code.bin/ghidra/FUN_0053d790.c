#include "../../../include/types.h"

void FUN_0053d790(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  if (puVar1 != NULL) {
    (**(code **)*puVar1)(puVar1);
    FUN_0053814c(puVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}
