#include "../../../include/types.h"

void FUN_0026e250(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x8431) != '\0') {
    (**(code **)(*(int *)(param_1 + param_2 * 0x394 + 0x4410) + 0x60))();
    return;
  }
  param_1 += param_2 * 0x36c;
  (**(code **)(*(int *)(param_1 + 0x890) + 0x60))(param_1 + 0x890);
  return;
}
