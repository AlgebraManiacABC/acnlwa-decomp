#include "../../../include/types.h"

void FUN_001cdddc(int param_1)

{
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xcf;
  return;
}
