#include "../../../include/types.h"

void FUN_001cdf88(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xf87fffff;
  return;
}
