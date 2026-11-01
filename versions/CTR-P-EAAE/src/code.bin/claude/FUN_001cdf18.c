#include "../../../include/types.h"

void FUN_001cdf18(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0x387fffff;
  return;
}
