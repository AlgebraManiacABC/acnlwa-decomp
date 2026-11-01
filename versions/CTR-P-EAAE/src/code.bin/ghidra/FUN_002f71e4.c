#include "../../../include/types.h"

void FUN_002f71e4(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0xb8);
  if ((*(uint *)(param_1 + 0xbc) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(int *)(param_1 + ((int)*(uint *)(param_1 + 0xbc) >> 1)));
  }
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
