#include "../../../include/types.h"

void FUN_001cde1c(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0x3fffffff;
  return;
}
