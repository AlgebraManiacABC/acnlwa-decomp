#include "../../../include/types.h"

void FUN_005aa460(int param_1,uint param_2)

{
  *(uint *)(param_1 + 4) = (param_2 & 7) << 2 | *(uint *)(param_1 + 4) & 0xffffffe3;
  return;
}
