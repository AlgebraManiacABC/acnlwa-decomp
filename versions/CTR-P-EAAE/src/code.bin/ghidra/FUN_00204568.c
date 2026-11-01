#include "../../../include/types.h"

void FUN_00204568(int param_1)

{
  FUN_00203d04();
  *(byte *)(param_1 + 0x280) = *(byte *)(param_1 + 0x280) & 0x7f;
  return;
}
