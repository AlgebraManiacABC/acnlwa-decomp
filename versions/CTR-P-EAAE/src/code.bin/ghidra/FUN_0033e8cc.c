#include "../../../include/types.h"

void FUN_0033e8cc(byte *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(&UNK_0083b46c + (uint)*param_1 * 8);
  if ((*(uint *)(&UNK_0083b470 + (uint)*param_1 * 8) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(int *)(param_1 + ((int)*(uint *)(&UNK_0083b470 + (uint)*param_1 * 8) >> 1)));
  }
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
