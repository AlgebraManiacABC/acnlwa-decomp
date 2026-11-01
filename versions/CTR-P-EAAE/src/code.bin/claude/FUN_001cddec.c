#include "../../../include/types.h"

void FUN_001cddec(int param_1,int param_2)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0x3fffffff | param_2 << 0x1e;
  return;
}
