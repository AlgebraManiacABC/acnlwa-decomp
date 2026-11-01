#include "../../../include/types.h"

void FUN_003cc160(int param_1,int param_2)

{
  *(char *)(param_1 + 0x22) = (char)param_2;
  if ((param_2 == 5) && (*(code **)(param_1 + 0x18) != NULL)) {
    (**(code **)(param_1 + 0x18))(param_1,param_1 + 0x1c);
    return;
  }
  return;
}
