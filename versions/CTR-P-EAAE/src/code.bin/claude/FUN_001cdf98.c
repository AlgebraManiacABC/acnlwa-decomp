#include "../../../include/types.h"

void FUN_001cdf98(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0xe) = param_2 & 0xf | *(byte *)(param_1 + 0xe) & 0xf0;
  return;
}
